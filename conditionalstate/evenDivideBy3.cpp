#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num%2==0){
        if(num%3==0){
            cout<<num<<" is even and divisible by 3";
        }
        else{
            cout<<num<<" is even but not divible by 3";
        }
    }
    else{
        cout<<"Number is odd";
    }
}