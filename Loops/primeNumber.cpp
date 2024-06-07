#include<iostream>
using namespace std;
int main(){
    int i=1,n,count=0;
    cin>>n;
    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}