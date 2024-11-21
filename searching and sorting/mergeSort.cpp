#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int s,int e,int mid){
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    // dynamic memory allocation is best practice to use
    int *leftArr = new int[leftLength];  //left array is created dynamically
    int *rightArr = new int[rightLength];  //rigth array is created dynamically

    //copying the values of original array into leftArr
    int  index = s;   // original array index
    for(int i = 0; i<leftLength; i++){
        leftArr[i] = arr[index++];
        
    }
     //copying the values of original array into rightArr
    for(int i = 0; i<rightLength; i++){
        rightArr[i] = arr[index++];
    }

    //now merge both the arrays
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    while(leftIndex < leftLength && rightIndex < rightLength){
        if(leftArr[leftIndex] < rightArr[rightIndex]){
            arr[mainArrayIndex++] = leftArr[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] =  rightArr[rightIndex++];
        }
    }
    // exceptional handle
    while(leftIndex < leftLength){
        arr[mainArrayIndex++] = leftArr[leftIndex++];
    }
    while(rightIndex < rightLength){
         arr[mainArrayIndex++] =  rightArr[rightIndex++];
    }

    //delete heap memory
    delete[] leftArr;
    delete[] rightArr;
}
void mergeSort(int arr[],int s,int e){
    int mid = s+(e-s)/2;
    // base case
    if(s>=e) return;
    // left part merge sort
    mergeSort(arr,s,mid);
    // right part merge sort
    mergeSort(arr,mid+1,e);
    // merge left and right part
    merge(arr,s,e,mid);
}
int main(){
    int arr[] = {10,50,30,40,90,67,34};
    int n = sizeof(arr)/sizeof(int);
    int s = 0;
    int e = n-1;
    mergeSort(arr,s,e);
    for(auto i : arr){
        cout<<i<<" ";
    }
}