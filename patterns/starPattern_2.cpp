#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter the number:";
    cin>>n;
    while(i<=n){
        int j=n-i+1;
        while (j>=1)
        {
            cout<<"*";
            j--;
        }
        cout<<'\n';
        i++;
    }
}