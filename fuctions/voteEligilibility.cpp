#include<iostream>
using namespace std;
int vote(int);
int main()
{
    int n,ans;
    cin>>n;
    ans=vote(n);
    cout<<ans;
}
int vote(int n){
    if(n>=18){
        return true;
    }
    else{
        return false;
    }
}