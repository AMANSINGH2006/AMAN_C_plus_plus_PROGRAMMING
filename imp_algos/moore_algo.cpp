#include<iostream>
#include<limits.h>
using namespace std;
/**************************** Majority Elements ***********************************************/
void majorityElements(int* arr, int n){
    int ans = 0;
    int freq = 0;
    for(int i = 0; i<n; i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(arr[i] == ans){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<"Majority Elements : "<<ans;
}
int main(){
    int arr[10];
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of arrays:"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    majorityElements(arr,n);
}