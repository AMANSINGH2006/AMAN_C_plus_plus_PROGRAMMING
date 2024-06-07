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
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        int k=i-1;
        while (k) // k>=1
        {
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
    
}