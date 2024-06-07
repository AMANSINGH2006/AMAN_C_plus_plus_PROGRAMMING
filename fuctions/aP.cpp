#include<iostream>
using namespace std;
int ap(int x){
    int ans;
    ans=3*x+7;
    return ans;
}
int main()
{
    int n,ans;
    cout<<"Enter the number:";
    cin>>n;
    ans=ap(n);
    cout<<ans;
}