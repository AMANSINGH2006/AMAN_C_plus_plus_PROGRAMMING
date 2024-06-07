#include<iostream>
using namespace std;
int isprime(int x);
int main()
{
    int ans,a,b;
    cout<<"Enter the number:\n";
    cin>>a;
        ans=isprime(a);
        cout<<ans<<endl;
}
int isprime(int a)
{
   int ans;
   for(int i=2; i*i<=a; i++)
   {
    if(a%i==0)
    {
        return false;
    }
    else
    return true;
   }
}