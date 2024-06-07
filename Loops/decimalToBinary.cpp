#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,ans=0,power=1;
    cout<<"Enter the Decimal number: ";
    cin>>n;
    while (n>0)
    {
        int parityDigit=n%2;
        ans=ans+parityDigit*power;
        power=power*10;
        n=n/2;
    }
    cout<<ans<<endl;
    return 0;
}