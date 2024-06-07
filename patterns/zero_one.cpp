#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter the number:";
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    
}