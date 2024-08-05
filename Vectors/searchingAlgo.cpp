#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector<int>nums{12,14,16,18,19};
    vector<int>nums{56,13,5,78,23,8,0034,45};

    sort_heap(nums.begin(),nums.end());
    for(int i : nums){
        cout<<i<<" ";
    }

    auto it = max_element(nums.begin(),nums.end());
    cout<<*it<<endl;

    auto p = min_element(nums.begin(),nums.end());
    cout<<*p<<endl;

    // bool it = binary_search(nums.begin(),nums.end(),18);
    // cout<<it << endl;

    /*auto it = lower_bound(nums.begin(),nums.end(),17);*/ /*return the element that is equal to value OR 
    if that value is not present than it return the element that is just greater than then value that searched*/

    /*auto it = upper_bound(nums.begin(),nums.end(),17);*//*it always return the value that is just > the searched value*/
    // cout<<*it;

    return 0;
}