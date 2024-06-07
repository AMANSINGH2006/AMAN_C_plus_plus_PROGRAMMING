#include<iostream>
using namespace std;
int main()
{
    int i=1,row,col;
    cout<<"Enter the number:";
    cin>>row;
    cin>>col;
    while (i<=row)
    {
        int j=1;
        while (j<=col)
        {
            if(i==1 || j==1 || i==row || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    } 
}