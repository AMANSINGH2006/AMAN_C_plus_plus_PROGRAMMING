#include<iostream>
#include<vector>
using namespace std;
int oddOccuring(vector<int>nums){
   int size = nums.size();
   int s = 0;
   int e = size-1;
   int mid = (s+e)/2;
   int ans = 0;
    while(s<=e){
        // if there is single element in vector
        if(s == e){
            return s;
        }
        if(mid%2 == 0){
            if(nums[mid] == nums[mid+1]){
                s = mid+2;
            }
            else{
                ans = mid;
            }
        }
        else{
            if(nums[mid] == nums[mid-1]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        mid = (s+e)/2;
    }
    return -1;
}
int main(){
    vector<int>nums{};
    int ans = oddOccuring(nums);
    cout<<ans;
}