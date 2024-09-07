#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPossibleSol(vector<int>trees,int heightRequire,int mid){
    int sawBlade = 0;
    for(int i = 0; i<trees.size(); i++){
        if(trees[i] > mid)
        sawBlade+=trees[i] - mid;
    }
    return sawBlade >= heightRequire;
}

int main(){
    vector<int>trees = {20,17,10,15};
    int m = 7;
    int start = 0;
    int end = *max_element(trees.begin(),trees.end());
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossibleSol(trees,m,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}