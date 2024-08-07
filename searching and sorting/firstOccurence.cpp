#include<iostream>
#include<vector>
using namespace std;
void firstOccurence(int nums[],int target,int size,int &ans){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    while (start<=end){
        if(nums[mid] == target){
            if (nums[mid-1] == target){
                end = mid-1;
            }
            else{
                ans = mid;
            }
        }
        mid = start+(end-start)/2;
    }
}
void lastOccurence(int nums[],int &target,int size,int &ans){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
     while (start<=end){
        if(nums[mid] == target){
            if (nums[mid+1] == target){
                start = mid+1;
            }
            else{
                ans = mid;
            }
        }
        mid = (start + end)/2;
    }
}
int main(){
    int nums[30];
    int size,target;
    cout<<"Enter the target Elements :\n";
    cin>>target;
    cout<<"Enter the size of elements :\n";
    cin>>size;
    cout<<"Enter the elements of Array:"<<endl;
    for (int i = 0; i < size; i++){
        cin>>nums[i];
    }
    int ans = -1;
    firstOccurence(nums,target,size,ans);
    cout<<"The first occurence of Element is at index : "<<ans<<endl;
    lastOccurence(nums,target,size,ans);
    cout<<"The last occurence of Element is at index : "<<ans<<endl;
}