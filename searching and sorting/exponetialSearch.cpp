#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int *arr,int start,int end,int target){
   while (start<=end){
    int mid = start + (end - start)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
   }
   return -1;
}
int main(){
    int arr[] = {3,4,5,6,11,13,14,15,16,56,70};
    int target = 15;
    int n = sizeof(arr)/sizeof(int);
        if(arr[0] == target) return 0;

        int i = 1;
        while(i<n && arr[i]<target){
            i*=2;
        }
        int end = min(i,n-1);
        int start = end/2;
        int ans = binarySearch(arr,start,end,target);
        cout<<ans;
}