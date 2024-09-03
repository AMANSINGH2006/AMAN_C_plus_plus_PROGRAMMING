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
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i],v[minIndex]);
    }
    return v;
}

int main(){
    vector<int>v{25,4,0,19,1};
    selectionSort(v);
    print(v);
}