#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Enter the range of odd number:"<<endl;
    cin>>n;
    cout<<"The odd numbers are:";
    for(i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
            cout<<i<<endl;
        }
    }
    cout<<"And their sum is:"<<sum;
}