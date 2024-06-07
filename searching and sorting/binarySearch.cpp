#include<iostream>
using namespace std;
int binarySearch(int nums[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
   while (start<=end){
     if(nums[mid]==target){
        return mid;
    }
    else if(target>nums[mid]){
        start=mid+1;
    }
    else if (target<nums[mid]){
        end=mid-1;
    }
    mid=(start+end)/2;
   }
   return -1;
}
int main(){
    int n,target;
    cout<<"Enter target value:\n";
    cin>>target;
    int nums[20];
    cout<<"Enter the size of array:\n";
    cin>>n;
    cout<<"Enter the elements of array\n";
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    int ans = binarySearch(nums,n,target);
    if(ans==-1){
        cout<<"Elements not found\n";
    }
    else{
        cout<<"Elemnt found at index :"<<ans;
    }
}