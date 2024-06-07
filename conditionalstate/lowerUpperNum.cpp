#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the letters:"<<endl;
    cin>>a;
    if(a>=97 && a<=123){
        cout<<"lower case";
    }
    else if(a>=65 && a<=91){
    cout<<"Upper case";
    }
    else if(a>=0 && a<=9){
        cout<<"Number";
    }
}