#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>ans){
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
vector<int> bubbleSort(vector<int>&v){
    for(int i = 0; i<v.size()-1; i++){
        int flag = 0;
        for(int j = 0; j<v.size()-1-i; j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
    return v;
}
int main(){
    vector<int>v{25,4,0,19,1};
    bubbleSort(v);
    print(v);
}