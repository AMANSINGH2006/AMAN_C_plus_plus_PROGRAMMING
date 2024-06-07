#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks:"<<endl;
    cin>>marks;
    if(marks>80){
        cout<<"good performance";
    }
    else if(marks>50){
        cout<<"well done";
    }
    else
    cout<<"poor performance";
}