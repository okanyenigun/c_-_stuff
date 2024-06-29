#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <vector>
#include <unordered_map>
#include <cassert>

using namespace std;

class PriorityQueue{
public:
    class Item{ //object and its priority
    public:
        int obj;
        int priority;
        Item(int o, int p): obj(o), priority(p){
        }
        //override for comparison of priorities
        bool operator>(const Item& rhs){
            return priority > rhs.priority;
        }

        bool operator<(const Item& rhs){
            return priority<rhs.priority;
        }
    };

    //add new priority object
    void add(int obj, int priority){
        assert(!objExists(obj)); //there can not be two of the same object
        heap.push_back(Item(obj,priority)); //push
        hashTable[obj] = heap.size()-1; //update hash table
        bubbleUp(heap.size()-1); //bubble up after push
    }

    //return True if empty
    bool isEmpty() const {
        return heap.size() == 0;
    }

    //return the object which has min priority
    Item getMin() const {
        assert(!isEmpty());
        return heap[0];
    }

    //delete the object which has min priority
    void deleteMin(){
        assert(!isEmpty());
        hashTable.erase(heap[0].obj);
        heap[0] = heap[heap.size()-1]; //take the last element to the root
        heap.pop_back();
        bubbleDown(0);
    }

    //change priority of object
    void changePriority(int obj, int newPriority){
        assert(objExists(obj));
        unsigned int idx = hashTable[obj];

        //if new value is smaller then bubble up vice-versa
        if(heap[idx].priority>newPriority){
            heap[idx].priority = newPriority;
            bubbleUp(idx);
        }else if(heap[idx].priority < newPriority){
            heap[idx].priority = newPriority;
            bubbleDown(idx);
        }
    }

    //get method
    int getPriority(int obj) const {
        assert(objExists(obj));
        unsigned int idx = hashTable.at(obj);
        return heap[idx].priority;
    }

    //check if given object in the heap
    bool objExists(int obj) const{
        return hashTable.find(obj) != hashTable.end();
    }

private:
    //bubble up starting from idx index
    void bubbleUp(unsigned int idx){
        unsigned int parentIdx = (idx-1)/2;
        while(idx != 0 && heap[parentIdx] > heap[idx]){
            Item parent = heap[parentIdx];
            Item me = heap[idx];
            heap[parentIdx] = me;
            heap[idx] = parent;
            //update hast table
            hashTable[me.obj] = parentIdx;
            hashTable[parent.obj] = idx;

            idx = parentIdx;
            parentIdx = (idx-1)/2;
        }
    }

    //if one the the children is smaller than given idx then swap places
    void bubbleDown(unsigned int idx){
        unsigned int lchild_idx = 2*idx+1;
        unsigned int rchild_idx = 2*idx+2;
        //check if right or left; one of them is smaller (and exists)
        while((lchild_idx < heap.size() && heap[lchild_idx] < heap[idx]) || (rchild_idx < heap.size() &&heap[rchild_idx]<heap[idx])){
             //find the smallest btw left and right
            unsigned int min_child_idx = lchild_idx;
            if(rchild_idx < heap.size()){
                if(heap[rchild_idx]< heap[lchild_idx]){
                    min_child_idx = rchild_idx;
                }
            }
            //swap
            Item me = heap[idx];
            Item child = heap[min_child_idx];
            heap[idx] = child;
            heap[min_child_idx] = me;
            //update hash table
            hashTable[me.obj] = min_child_idx;
            hashTable[child.obj] = idx;

            idx = min_child_idx;
            lchild_idx=2*idx+1;
            rchild_idx=2*idx+2;
        }
    }
    vector<Item> heap;
    unordered_map<int, unsigned int> hashTable;
};

#endif
