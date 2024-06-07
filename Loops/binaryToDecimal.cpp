#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number in binary:"<<endl;
    cin>>n;
    int ans=0;
    int power=1;
    int lastDigit;
    while (n>0)
    {
        lastDigit = n % 10;
        ans = ans + (lastDigit * power);
        power = power * 2;
        n = n / 10;
    }
    cout<<ans;
    
}