#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>ans){
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
vector<int> selectionSort(vector<int>&v){
    int n = v.size();
    for(int i = 1; i<n; i++){
        int key = v[i];
        int j = i-1;
        while(j>=0 && v[j]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    return v;
}

int main(){
    vector<int>v{25,4,0,19,1};
    selectionSort(v);
    print(v);
}