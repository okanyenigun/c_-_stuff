#include <iostream>
#include "LinkList.h"
#include <cmath>
#include <stack>
using namespace std;

LinkedList::LinkedList(int A[], int n)
{
    Node *tail,*t;
    int i=0;

    head = new Node;
    head->data=A[0];
    head->next=NULL;
    tail=head;
    for (i=1;i<n;i++)
    {
        t = new Node; //create new node
        t->data=A[i]; //take next element of array
        t->next = NULL; //now no next element yet
        tail->next=t; // tail node should point t, başta head'ti burda bağlamış olduk
        tail=t; // tail should move on last
    }
}

LinkedList::~LinkedList()
{
    Node *p = head;
    while(head)
    {
        head=head->next;
        delete p;
        p=head;
    }
}

void LinkedList::Display()
{
    Node *p = head;
    while(p)
    {
        cout << p->data << " ";
        p=p->next;
    }
    cout << endl;
}

int LinkedList::Length()
{
    Node *p = head;
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

void LinkedList::Insert(int index,int x)
{
    Node *t,*p=head;
    if(index<0 || index > Length())
        return;
    t = new Node; // create new node
    t->data=x; // takes data
    t->next=NULL; // points nowhere yet

    if(index==0)
    {
        t->next=head; //points to old head because its location is 0
        head=t; // move head cursor to point to new head
    }
    else
    {
        for(int i=0;i<index;i++)
            p=p->next; //go to the index with temp cursor
        t->next=p->next; // new node t will point to next node that p points
        p->next=t; // node that p points connects new node
    }
}

int LinkedList::Delete(int index)
{
    Node *p,*q=NULL;
    int x=-1;

    if(index<1 || index >Length())
        return -1;
    if(index==1)
    {
        p=head; // p cursor points head
        head=head->next; // head cursor now points next node
        x=p->data; //we take deleted data of previous head
        delete p; // we delete p node
    }
    else
    {
        p=head; // p cursor points head
        for(int i=0;i<index-1;i++)
        {
            q=p; // q cursor points p cursor's node ama arada 1 index fark var
            p=p->next; // go to index
        }
        q->next=p->next; //bir sonraki node'un pointeri q'da
        x=p->data; // silinecek datayı al
        delete p; // node'u sil
    }
    return x;
}

int LinkedList::isLoop()
{
    //eğer last node null değil de ilk node harici başka bir node'u gösteriyorsa, LOOP
    //2 pointer, 1'i 1 step, diğeri 2 step gidiyor, loop varsa bi yerde aynı nodeu gösterirler.
    Node *p,*q= head;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;//condition ? result_if_true : result_if_false; q null mu değil mi kontrolü
    }while(p && q && p != q); // p ve q null ve birbirlerine eşit olmadıkça
    if(p==q)
        return 1;
    else
        return 0;
}

int LinkedList::Sum()
{
    Node *p=head;
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}

int LinkedList::Rsum(Node *p)
{
    if(p==NULL)
        return 0;
    else
        return Rsum(p->next)+p->data;
}

int LinkedList::Max()
{
    Node *p = head;
    int max=INT32_MIN;
    while(p)
    {
        if(p->data>max)
            max =p->data;
        p=p->next;
    }
    return max;
}

int LinkedList::Rmax(Node *p)
{
    int x=0;
    if(p==0)
        return INT32_MIN;
    x=Rmax(p->next);
    if(x>p->data)
        return x;
    else
        return p->data;

}

Node* LinkedList::LSearch(Node *p,int key)
{
    Node *q;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=head;
            head=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

Node* LinkedList::RSearch(Node *p,int key)
{
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return RSearch(p->next,key);
}

int LinkedList::isSorted()
{
    Node *p=head;
    int x = -65536;
    while(p!=NULL)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}

void LinkedList::RemoveDuplicate()
{
    //valid for sorted
    Node *p=head;
    Node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}

void LinkedList::Reverse1()
{
    Node *p=head;
    int *A,i=0;
    Node *q=p;
    A = new int [Length()];
    while(q!=NULL)
    {
        A[i] = q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
}

void LinkedList::Reverse2()
{
    //sliding pointers
    //3 pointers move together
    Node *p=head;
    Node *q =NULL;
    Node *r=NULL;
    while(p!=NULL)
    {
        r=q; // r moves to q
        q=p; // q moves to p
        p=p->next; // p moves to next
        q->next=r; // turn opposite way of q next direction, geriye doğru işaret ediyor
    }
    head=q;
}

void LinkedList::Reverse3(Node *q, Node *p)
{
    if(p)
    {
        Reverse3(p,p->next);
        p->next=q;
    }
    else
        head=q;
}

void LinkedList::middleNode1(Node* p){
    int length = 0;
    while (p){
        length++;
        p = p->next;
    }

    int index = (int)ceil(length/2.0);
    Node* q = head;
    for (int i=0; i<index-1; i++){
        q = q->next;
    }
    cout << "Middle Element (Method-I): " << q->data << endl;
}

void LinkedList::middleNode2(Node* p){
    Node* q = p;
    while (q){
        q = q->next;
        if (q){
            q = q->next;
        }
        if (q){
            p = p->next;
        }
    }
    cout << "Middle Element (Method-II): " << p->data << endl;
}
void LinkedList::Intersection(Node* p, Node* q){
    // Populate first stack
    stack<Node*> stk1;
    while (p != nullptr){
        stk1.push(p);
        p = p->next;
    }

    // Populate second stack
    stack<Node*> stk2;
    while (q != nullptr){
        stk2.push(q);
        q = q->next;
    }

    Node* r;
    while (stk1.top() == stk2.top()){
        r = stk1.top();
        stk1.pop();
        stk2.pop();
    }
    cout << "Intersecting Node: " << r->data << endl;
}

/*
void LinkedList::Merge()
{
    Node *p=NULL;
    Node *q=NULL;
    Node *third = NULL;
    Node *last;
    if(p->data < q->data)
    {
        third = last = p;
        p=p->next;
        third->next=NULL;
    }
    else
    {
        third = last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q)
    {
        if(p->data < q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;
}

*/
