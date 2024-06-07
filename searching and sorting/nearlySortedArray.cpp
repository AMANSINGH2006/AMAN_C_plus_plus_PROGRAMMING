#include<iostream>
#include<vector>
using namespace std;
int nearlySorted(vector<int>nums, int target){
    int size = nums.size();
    int s = 0;
    int e = size - 1;
    int mid = (s+e)/2;
    while (s<=e){
        if(nums[mid] == target){
            return mid;
        }
        if(mid-1 >= s && nums[mid-1] == target){
            return mid-1;
        }
        if(mid+1 <= e && nums[mid+1] == target){
            return mid+1;
        }
        if(nums[mid]>target){
            e = mid-2;
        }
        else{
            s = mid+2;
        }
        mid = (s+e)/2;
    }
    return -1;
}
int main(){
    vector<int>nums = {10,3,40,20,50,80,70};
    int target = 70;
    int ans = nearlySorted(nums,target);
    cout<<"The index of target element is : "<<ans;
}