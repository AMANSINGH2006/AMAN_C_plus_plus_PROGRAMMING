#include<iostream>
using namespace std;
void alternate(int num[],int n)
{
    for (int i = 0; i < n ; i+=2)
    {  if(i+1<n)
        swap(num[i],num[i+1]);
    }
}
int main()
{
    int num[20];
    int size;
    cout<<"Enter the size of Array:"<<endl; 
    cin>>size;
    cout<<"Enter the elements of Array:"<<endl; 
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    alternate(num,size);
    for (int i = 0; i < size; i++)
    {
        cout<<num[i]<<" ";
    }
}