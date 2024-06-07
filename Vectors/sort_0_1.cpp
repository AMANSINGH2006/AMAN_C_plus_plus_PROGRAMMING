#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    vector<int>ZerOne(n);
    for (int i = 0; i < n; i++){
        cin>>ZerOne[i];
    }
    int start=0;
    int i=0;
    int end=ZerOne.size()-1;
    while (i<ZerOne.size()){
        if (ZerOne[i]==0){
            swap(ZerOne[i],start);
            start++;
            i++;
        }
        if (ZerOne[i]==1)
        {
            swap(ZerOne[start],end);
            end--;
        }
        
    }
    
}