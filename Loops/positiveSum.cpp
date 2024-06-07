#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    do{
        cout<<"Enter the positive number again:"<<endl;
        cin>>n;
        if(n>=0){
        sum+=n;}
        else{
            cout<<"you have entered negative number !!!"<<endl;
        }
    }while(n>=0);
    cout<<"The sum of number is :"<<sum;
}