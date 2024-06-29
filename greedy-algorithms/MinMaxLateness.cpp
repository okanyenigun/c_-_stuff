#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Request{
public:
    int id;
    double length;
    double deadline;

    Request(int i, double u, double d): id(i), length(u), deadline(d) {
    }

    bool operator<(const Request& rhs){
    return deadline < rhs.deadline;}


};

pair<vector<double>, vector<double>> DeadlineScheduling(vector<Request> I){
    sort(I.begin(), I.end());

    vector<double> s(I.size());
    vector<double> f(I.size());

    double z=0;

    for(int i=0;i<I.size();i++){
        int id = I[i].id;
        double length = I[i].length;
        double deadline = I[i].deadline;

        s[id] = z;
        f[id] = z + length;
        z = z+length;
    }

    return make_pair(s,f);
}

int main(){
    vector<Request> I;

    I.push_back(Request(0,4,10));
    I.push_back(Request(1,4,10));
    I.push_back(Request(2,9,9));

    pair<vector<double>, vector<double>> result = DeadlineScheduling(I);

    vector<double>& s = result.first;
    vector<double>& f = result.second;

    for(int id=0; id< s.size(); id++){
        cout << s[id] << " " << f[id] << endl;
    }
}
