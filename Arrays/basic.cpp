#include<iostream>
using namespace std;
int main()
{
    float marks[][3]={
                        {12.6f , 5.6},
                        {34.5},
                        {23.5,12}
                        };
     for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
           cout<<marks[i][j]<<'\t';
        }
        cout<<endl;
     }


    //  float marks[2][3]={
    //                       {12.6f , 5.6 , 5},
    //                       {34.5 , 1 , 2.3}
    //                     };
    //  for (int i = 0; i < 2; i++)
    //  {
    //     for (int j = 0; j < 3; j++)
    //     {
    //        cout<<marks[i][j]<<'\t';
    //     }
    //     cout<<endl;
    //  }
    

    // int a[5]={1,2,0};
    // cout<<"The size of a = "<<sizeof(a)<<endl;
    // cout<<"The address of a = "<<&a;
    // int n,arr[15];
    // cout<<"Enter the number:"<<endl;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<&arr[1]<<endl;
    // cout<<&arr[2]<<endl;
    // cout<<&arr[3]<<endl;
}