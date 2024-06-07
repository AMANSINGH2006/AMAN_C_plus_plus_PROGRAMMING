#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(int nums[],int target,int size){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    while (start<=end){
        if(nums[mid] == target){
            if (nums[mid-1] == target){
                end = mid-1;
            }
            else{
                return mid;
            }
        }
        mid = start+(end-start)/2;
    }
}
int lastOccurence(int nums[],int target,int size){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
     while (start<=end){
        if(nums[mid] == target){
            if (nums[mid+1] == target){
                start = mid+1;
            }
            else{
                return mid;
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
    int ans = firstOccurence(nums,target,size);
    cout<<"The first occurence of Element "<<target<<" is "<<ans<<endl;
    int second = lastOccurence(nums,target,size);
    cout<<"The last occurence of Element "<<target<<" is "<<second;
}