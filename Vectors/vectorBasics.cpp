#include<iostream>
#include<vector>
using namespace std;
int main(){
                                                   //2D vector
    vector<vector<int>>arr;
    vector<vector<int>>arr(3,vector<int>(4,0));


                                                   //1D vector
    // vector<int>first = {10,23,45,7,8,7};  // one more way initialisation of vector
    // vector<int>second{203,100,200,300,400};  // one more way initialisation of vector
    // first.swap(second);
    // for(int i:first){
    //     cout<<i<<" ";
    // }

    //initilisation in vector
    // vector<int>nums;
    // vector<int>marks(10);
    // vector<int>arr(10,1);

    // // cout<<*(arr.begin())<<endl;

    // nums.push_back(10);
    // nums.push_back(20);
    // nums.push_back(30);
    // nums.push_back(40);
    // nums.push_back(50);

    // vector<int>::iterator it = nums.begin();
    // //for Each Loop for Traversing the vector
    // for(int it : nums){
    //     cout<<it<<" ";
    //     it++;
    // }

    // nums.insert(nums.end(),23);
    // nums.insert(nums.begin() + 2,333);
    // cout<<nums.size();

    // for(int i : nums){
    //     cout<<i<<" ";
    // }
    // nums.clear();
    // cout<<nums.size();

    // cout<<"Maximum block that is allocated to vector : "<<nums.capacity()<<endl;
    // cout<<"Actual size of vector : "<<nums.size();

    // nums.pop_back();    //deleting the last element of the vector
    // cout<<"Size : "<<nums.size()<<endl;

    // cout<<"Front element : "<<nums.front()<<endl;
    // cout<<"Last element : "<<nums.back()<<endl;

    // if(nums.empty() == true)
    // cout<<"Vector is Empty";
    // else
    // cout<<"Vector is not Empty";
}