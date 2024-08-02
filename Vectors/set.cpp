#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    // set<int>st;                          //ordered_set creation
    unordered_set<int>ust;                 //unordered_set creation
    ust.insert(10);
    ust.insert(34);
    ust.insert(23);
    ust.insert(34);
    ust.insert(28);

    unordered_set<int>::iterator it = ust.begin();
    while(it != ust.end()){
        cout<<*it<<" ";
        it++;
    }   
    return 0;
}