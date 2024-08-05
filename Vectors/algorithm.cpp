#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void doublePrint(int a){
//         cout<<a*100<<" ";
//     }
int findEven(int arr){
   return arr%2 == 0;
    
}
int main(){
    vector<int>arr{10,20,20,201,40,15,15,15,60};

    // auto it = unique(arr.begin(),arr.end()); /*it iterator ke pahle sare unique elements honge [10,20,40,15,60,20,20,15,15]
    //                                             aur it iterator ke baad sare duplicates elements honge*/
    // arr.erase(it,arr.end());
    // for(auto i : arr){
    //     cout<<i<<" ";
    // }

    auto it = partition(arr.begin(),arr.end(),findEven);  /*partition between Even and odd*/
    for(auto i : arr){
        cout<<i<<" ";
    }    

    // for_each(arr.begin(),arr.end(),doublePrint);

    // int target = 50;
    // auto it = find(arr.begin(),arr.end(),target);
    // cout<<*it<<endl;

    // auto it = find_if(arr.begin(),arr.end(),findEven); //return the iterator which is 1st even number
    // cout<<*it<<endl;

//    int ans = count_if(arr.begin(),arr.end(),findEven);
//     cout<<ans<<endl;

    // rotate(arr.begin(),arr.begin()+3,arr.end());
    // for(auto i : arr){
    //     cout<<i<<" ";
    // }
}
