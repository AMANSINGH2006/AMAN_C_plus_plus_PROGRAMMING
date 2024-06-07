#include<iostream>
using namespace std;
int fact(int);
int main(){
    int n,a;
    cout<<"Enter the number:\n";
    cin>>n;
    a=fact(n);
    cout<<a;
}
int fact(int n){
    int i=1;
    int ans=1; 
    while (i<=n)
    {
        ans=ans*i;
        i++;
    }
    return ans;
}