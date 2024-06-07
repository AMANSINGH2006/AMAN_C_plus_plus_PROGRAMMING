#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<"The total sum of numbers is:"<<sum;
}