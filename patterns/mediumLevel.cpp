#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter the number:";
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=n-i+1)
        {
            cout<<j ;
            j++;
        }
        int str=1;
        while (str<=2*i-2)
        {
            cout<<"*";
            str++;
        }
        int k=n-i+1;
        while (k>=1)
        {
            cout<<k ;
            k--;
        }
        cout<<endl;
        i++;
    }
    
}