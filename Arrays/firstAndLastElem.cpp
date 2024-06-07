#include<iostream>
using namespace std;
int main()
{
    int arr[15]={0};
    arr[0]=1;
    arr[14]=150;
    for(int i=0;i<15;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}