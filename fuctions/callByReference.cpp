#include<iostream>
using namespace std;
int fun(int*,int*);
int main(){
    int x=5,y=7;
    fun(&x,&y);
    cout<<"calling funtion(x,y) value:"<<endl;
    cout<<x<<endl<<y;
}
int fun(int* x,int* y){
    *x=7;
    *y=5;
    cout<<"called funtion(x,y) value:"<<endl;
    cout<<*x<<endl<<*y<<endl;
}