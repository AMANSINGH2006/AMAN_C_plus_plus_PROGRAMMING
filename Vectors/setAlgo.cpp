#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    vector<int>arr{10,200,30,40,50};
    vector<int>arr1{30,40,600,70,80};
    // set<int>ans;
    vector<int>ans;
    set_union(arr.begin(),arr.end(),arr1.begin(),arr1.end(),inserter(ans,ans.begin()));
    for(int a : ans){
        cout<<a<<" ";
    }

    set_intersection(arr.begin(),arr.end(),arr1.begin(),arr1.end(),inserter(ans,ans.begin()));
    for(int b : ans){
        cout<<b<<" ";
    }

    set_difference(arr.begin(),arr.end(),arr1.begin(),arr1.end(),inserter(ans,ans.begin()));
    for(int c : ans){
        cout<<c<<" ";
    }

    set_symmetric_difference(arr.begin(),arr.end(),arr1.begin(),arr1.end(),inserter(ans.ans.begin()));
    for(int i : ans){
        cout<<i<<" ";
    }

    return 0;
}