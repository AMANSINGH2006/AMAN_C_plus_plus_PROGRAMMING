#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> > nums;
    vector<int>a{2,3,6,5};
    vector<int>b{4,2,1,0,0,4};
    vector<int>c{1,5,8};
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    for (int i = 0; i < nums.size(); i++){
        for (int j = 0; j < nums[i].size(); j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
}