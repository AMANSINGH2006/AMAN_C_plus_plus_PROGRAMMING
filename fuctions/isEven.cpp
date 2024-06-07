#include<iostream>
using namespace std;
int isEven(int);
int main(){
    int a;
    cin>>a;
    isEven(a);
    isEven(a);
}
int isEven(int x){
    if(x%2==0){
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }
}