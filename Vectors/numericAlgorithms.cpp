#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){
    vector<int>nums{10,20,30,40,50};
    vector<int>arr(nums.size());
    vector<int>a(5);

    int totalSum = accumulate(nums.begin(),nums.end(),0);
    cout<<totalSum<<endl;

    int mul = inner_product(nums.begin(),nums.end(),arr.begin(),0);
    cout<<mul<<endl;

    partial_sum(nums.begin(),nums.end(),arr.begin());
    for(int i : arr){
        cout<<i<<" ";
    }

    iota(a.begin(),a.end(),530);
    for(int i : a){
        cout<<i<<" ";
    }
    
    return 0;
}