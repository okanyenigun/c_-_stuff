#include <iostream>
#include <vector>
#include <algorithm>
#include "PriorityQueue.h"
using namespace std;

class Neighbour {

public:
    int adjacent;
    int weight;

Neighbour(int a, int w): adjacent(a), weight(w){

}
};

vector<int> extract_path(const vector<int>&p, int h)
{
    vector<int> result;
    result.push_back(h);
    while(p[h] != -1)
    {
        result.push_back(p[h]);
        h = p[h];
    }
    reverse(result.begin(), result.end());
    return result;
}

pair <int, vector<int>> Dijkstra(vector<vector<Neighbour>>&Graph, int k, int h, bool& exists)
{
    int N = Graph.size(); //node count in graph
    vector<bool> A(N,false);
    vector<int> d(N);
    vector<int> p(N);
    PriorityQueue Q;
    Q.add(k,0);
    p[k] = -1;
    while(!Q.isEmpty())
    {
        auto item = Q.getMin();
        Q.deleteMin();
        int n = item.obj;
        int u = item.priority;
        d[n] = u;
        A[n] = true;
        for(auto& neigh: Graph[n])
        {
            int x = neigh.adjacent;
            int cnx = neigh.weight;
            if(A[x] == true)
            {
                continue;
            }
            if(Q.objExists(x) == false)
            {
                Q.add(x,d[n] + cnx);
                p[x] = n;
            }else {
                if(Q.getPriority(x) > d[n] + cnx){
                    Q.changePriority(x, d[n]+cnx);
                    p[x] = n;
                }
            }
        }
    }
    if(A[h] == false){
        exists = false;
        return make_pair(-1, vector<int>());
    }
    exists = true;
    return make_pair(d[h], extract_path(p,h));
}

