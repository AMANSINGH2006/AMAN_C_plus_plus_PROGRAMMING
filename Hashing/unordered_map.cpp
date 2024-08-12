#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>table;
    table[1] = 53;
    table[3] = 45;
    table[2] = 98;
    table[4] = 34;
    unordered_map<int,int>::iterator it;
    // for(auto it = table.begin(); it != table.end(); it++){
    //     int key = it->first;
    //     int value = it->second;
    //     cout<<"key = "<<key<<" "<<"value = "<<value<<endl;
    // }
     it = table.begin();
    while(it != table.end()){
        pair<int,int>p = *it;
        cout<<"key = "<<p.first<<" "<<"value = "<<p.second;
        it++;
        cout<<endl;
    }
}