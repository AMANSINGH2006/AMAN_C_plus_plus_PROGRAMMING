#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a{2,0,4,6,8,5,7};
    vector<int>b{3,4,5,6,7,8,2,2,2};
    vector<int>nums;
    for (int i = 0; i < a.size(); i++)
    {
       for (int j = 0; j < b.size(); j++)
       {
          if(a[i]==b[j]){
             nums.push_back(a[i]);
             b[j]=INT16_MIN;
             break;
          }
       }
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}