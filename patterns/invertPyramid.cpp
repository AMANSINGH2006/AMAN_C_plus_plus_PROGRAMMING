#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=n;
    while (i>=1)
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
       i--;
    }  
}
