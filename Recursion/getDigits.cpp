#include<iostream>
using namespace std;
int binarySearch(int* arr, int size, int target, int s, int e){
    int mid = s + (e - s)/2;
    if(arr[mid] == target){
        return mid;
    }
    if(target > arr[mid]){
        return binarySearch(arr, size, target, s+1, e);
    }
    if(target < arr[mid]){
        return binarySearch(arr, size, target, s, e-1);
    }
}
int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    int target = 30;
    int s = 0;
    int e = size - 1;
    binarySearch(arr, size, target, s, e);
}