#include<iostream>
#include<limits.h>
using namespace std;
/********************* Maximum subarray sum *******************************************/
void maximumSubArraySum(int* arr, int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Maximum Subarrays Sum : "<<maxSum;
}
int main(){
    int arr[10];
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of arrays:"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    maximumSubArraySum(arr,n);
}