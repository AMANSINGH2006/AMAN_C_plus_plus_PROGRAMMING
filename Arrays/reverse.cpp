#include<iostream>
using namespace std;
int reverse(int rev[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=rev[i];
        rev[i]=rev[n-i-1];
        rev[n-i-1]=temp;
    }
}
int main(){
    int rev[10]={2,8,4,-9,3,7,4,-5,0,6};
    reverse(rev,10);
    for(int i=0;i<10;i++){
        cout<<rev[i]<<" ";
    }
}