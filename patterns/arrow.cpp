#include<iostream>
using namespace std;
int main(){
    int i=1,n,nst=1;
    cout<<"Enter the number:";
    cin>>n;
    while (i<=2*n-1)
    {
        int j=1;
        while (j<=nst)
        {
           cout<<"*";
           j++;
        }
        if(i<n){
            nst++;
        }
        else{
            nst--;
        }
        cout<<endl;
        i++;
    }
    
}