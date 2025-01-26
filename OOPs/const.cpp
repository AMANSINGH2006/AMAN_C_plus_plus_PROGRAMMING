#include<iostream>
using namespace std;
int main(){
// const data, non-const pointer
    // const int *a = new int(3); 
    // // int const *a = new int(30); //both are same
    // cout<< *a <<endl;

    // int b = 20;
    // a = &b;
    // cout<<*a<<endl;


// NON-CONST DATA, CONST POINTER
    // int *const a = new int(10);
    // *a = 10;         //run because of non-const data
    // cout<<*a<<endl;
    
    // int b = 5;
    // a = &b;   //error -> const pointer
    // cout<<*a<<endl;

//CONST DATA, CONST POINTER
    const int *const a = new int(10);
    // *a = 5; not possible due to const data
    cout<<*a<<endl;

    // int b = 5;
    // a = &b;   //error -> const pointer
    // cout<<*a<<endl;
}