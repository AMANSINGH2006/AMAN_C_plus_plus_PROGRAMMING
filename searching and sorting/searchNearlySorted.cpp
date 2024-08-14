#include<iostream>
#include<vector>
using namespace std;
int searchInNearlySortedArray(int nums[],int n,int target){
    int s = 0;
    int e = n-1;
    int mid = s + ((e-s) >> 1);
    while(s<=e){
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid-1] == target){
            return mid-1;
        }
        else if(nums[mid+1] == target){
            return mid+1;
        }
        else if(target < nums[mid]){
            e = mid-2;
        }
        else{
            s = mid + 2;
        }
        mid = s + ((e-s) >> 1);
    }
    return -1;
}
int main(){
    int nums[] = {3,10,20,40,50,70,80};
    int n = sizeof(nums)/sizeof(int);
    int target = 50;
    int ans = searchInNearlySortedArray(nums,n,target);
    cout<<"Element is at Index : "<<ans;
}