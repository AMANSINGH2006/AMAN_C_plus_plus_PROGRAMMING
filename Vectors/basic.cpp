#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>arr;
    // int total=sizeof(arr)/sizeof(bool);
    // cout<<total<<'\n';
    // cout<<"The size of vector is : "<<arr.size()<<'\n';
    // cout<<"The capacity of vector is : "<<arr.capacity()<<'\n';

    // Insert the using push_back()
    // arr.push_back(3);
    // arr.push_back(10);
    // arr.push_back(521);
    // for (int i = 0; i < arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // To delete the last element
    // arr.pop_back();
    // arr.pop_back();
    // for (int i = 0; i < arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
     
     int n;
     cin>>n;
    // vector<int>arr(n);
    vector<int>arr(n,-1);
    // for (int i = 0; i < arr.size(); i++){
    //     cin>>arr[i];
    // }
    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr.empty();
}