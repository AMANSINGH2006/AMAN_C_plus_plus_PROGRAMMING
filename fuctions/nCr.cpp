#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1,i;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r)
{
    int numerator=factorial(n);
    int denomenator=factorial(r)*factorial(n-r);
    int ans=numerator/denomenator;
    return ans;
}
int main()
{
    int n,r,ans;
    cout<<"Enter the value of n and r:"<<endl;
    cin>>n>>r;
    // if(n==r){
    //     cout<<"not defined";
    // }
    ans=nCr(n,r);
    cout<<ans;
}