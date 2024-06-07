#include<iostream>
using namespace std;
int main()
{
    int a[5]={5,8,4,6,7};
    int b[5]={2,4,7,3,2};
    int c[5];
    for(int i=0;i<5;i++){
        c[i]=a[i]+b[i];
        cout<<c[i]<<" ";
    }
}