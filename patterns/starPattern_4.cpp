#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter the number:";
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=n-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while (k<=i)
        {
            cout<<"* ";
            k++;
        }
        cout<<endl;
        i++;
    }
    
}