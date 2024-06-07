#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,sum=0,i=1,n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    while (i<=n)
    {
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
        i++;
    }
    
}
// Method - 2:
// sum=(n-1)+(n-2)