#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter the number:";
    cin>>n;
    while (i<=n)
    {
      int j=i;
      while (j>=1)
      {
        cout<<j;
        j--;
      }
      cout<<endl;
       i++;
    }
}
