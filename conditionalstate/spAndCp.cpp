#include<iostream>
using namespace std;
int main(){
    int sp,cp,profit,loss;
    cout<<"Enter the value of SP:"<<endl;
    cin>>sp;
    cout<<"Enter the value of CP:"<<endl;
    cin>>cp;
    if(sp>cp){
        profit=sp-cp;
        cout<<"profit of :"<<profit;
    }
    else if(sp==cp){
        cout<<"Neigher profit nor loss";
    }
    else{
        loss=cp-sp;
        cout<<"Loss of :"<<loss;
    }
}