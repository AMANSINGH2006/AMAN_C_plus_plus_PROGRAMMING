#include<iostream>
using namespace std;
int linearSearch(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={2,4,-6,8,0,-3,7,-6,2,3};
    int key;
    cout<<"Enter the key value please:"<<endl;
    cin>>key;
    bool found = linearSearch(arr,key,10);
    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}