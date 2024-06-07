#include<iostream>
using namespace std;
int main(){
    int i=1,n,nsp=n-1,nst=1;
    cout<<"Enter the number:";
    cin>>n;
    while (i<=2*n-1)
    {
        int space=1;
        while (space<=nsp)
        {
            cout<<" ";
            space++;
        }
        int j=1;
        while (j<=nst)
        {
            cout<<"*";
            j++;
        }
        if(i<n)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
         cout<<endl;
        i++;
    }
}