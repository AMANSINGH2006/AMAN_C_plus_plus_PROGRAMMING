#include<iostream>
using namespace std;
int main(){
    int arr[10][10];
    cout<<"Enter the elements of array:\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The original Arrays are:\n";
    for (int i = 0; i < 5; i++){
    int sum=0;   
    for (int j = 0; j < 4; j++){
        cout<<arr[i][j]<<'\t';
        sum+=arr[i][j];
    }
    cout<<sum;
    cout<<endl;
    }
}