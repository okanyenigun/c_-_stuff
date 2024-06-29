#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Request {
public:
    double start;
    double finish;
    Request(double s, double f): start(s), finish(f){
    }
    bool operator<(const Request& rhs){ //right hand side
        return finish < rhs.finish;
    }
};

vector<Request> IntervalScheduling(vector<Request> I){
    sort(I.begin(), I.end());
    double fet = -1; //final end time
    vector<Request> A;
    for(auto& i: I){
        if(i.start < fet){ //means there is overlap
            continue;
        }
        A.push_back(i);
        fet = i.finish;
    }
    return A;
}

int main(){
    vector<Request> I;
    
    //addition
    I.push_back(Request(1,4));
    I.push_back(Request(5,8));
    I.push_back(Request(9,12));
    I.push_back(Request(3,6));
    I.push_back(Request(7,10));
    I.push_back(Request(2,11));

    vector<Request> A = IntervalScheduling(I);
    for(auto& i:A) {
        cout << i.start << " " << i.finish << endl;
    }
    return 0;
}
