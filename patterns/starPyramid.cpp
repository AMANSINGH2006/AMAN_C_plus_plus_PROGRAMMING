#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter the number:";
    cin>>n;
    while (i<=n)
    {
        int space=1;
        while (space<=n-i)
        {
            cout<<" ";
            space++;
        }
        int j=1;
        while (j<=2*i-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
       i++;
    }  
}
