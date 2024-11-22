#include<iostream>
#include<vector>
using namespace std;
void quickSort(vector<int>&arr,int n,int start,int end){
    int pivot = end;
    int i = start-1;
    int j = start;
    // base case
    if(start >= end) return;
    // recursive function
    while(j < pivot){
        if(arr[j] < arr[pivot]){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    ++i;
    swap(arr[i],arr[pivot]);
    quickSort(arr,n,start,i-1);
    quickSort(arr,n,i+1,end);
}
int main(){
    vector<int>arr = {13,45,56,34,23,52};
    int n = arr.size();
    int start = 0;
    int end = n-1;
    quickSort(arr,n,start,end);
    for(auto i : arr){
        cout<<i<<" ";
    }
}