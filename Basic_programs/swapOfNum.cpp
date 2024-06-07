#include<iostream>
using namespace std;
int main(){
    int a,b,temp=0;
    cout<<"Enter the value of a and b :"<<endl;
    cin>>a>>b;
    // Swaping of numbers using 3rd variable
    // temp=a;
    // a=b;
    // b=temp;
    // swaping of numbers without using the 3rd variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The value of a is:"<<a<<" and the value of b is:"<<b;
}