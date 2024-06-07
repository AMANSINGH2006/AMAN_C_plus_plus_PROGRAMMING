#include<iostream>
using namespace std;
int fibo(int n){
    int a=0;
    int b=1;
    int sum=0,temp;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    fibo(n);
}