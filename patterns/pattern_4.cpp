#include<iostream>
using namespace std;
int main(){
    int i=1,n,count=1;
    cout<<"Enter the number:";
    cin>>n;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            cout<<count;
            count=count+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}