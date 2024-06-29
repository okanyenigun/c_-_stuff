#include <iostream>
#include "Dijkstra.cpp"

using namespace std;

int main(){

    int n; //node
    int m; //edge

    cin >> n >> m;
    vector<vector<Neighbour>> Graph(n); //create vector size n

    for (int i=0;i<m;i++){ //push the connections
        int x,y,w;
        cin >> x >> y >> w;
        Graph[x].push_back(Neighbour(y,w));
    }

    int k,h;
    bool exists;
    cin >> k >> h;
    pair<int, vector<int> > res =  Dijkstra(Graph, k, h,exists);
    if(exists)
    {
        cout << res.first << endl;
        for (auto& node: res.second)
        {
            cout << node << " ";
        }
    cout << endl;
    }else {
     cout << "there is no path" << endl;
    }
    return 0;
}
