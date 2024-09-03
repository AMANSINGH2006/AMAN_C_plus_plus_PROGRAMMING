#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printvv(vector<int>)
int main(){
    vector<int>v;
    vector<int>temp;
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"Enter the Elements of the array : "<<'\n';
    int a,b;
    for(int i = 0; i<n; i++){
        cout<<"Enter a,b : ";
        cin>>a>>b;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
}

// void print(vector<int>&arr){
//     for(int i = 0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
// }
// bool myCamp(int &a,int &b){
//     // return a<b;
//     return a>b;
// }
// int main(){
//    vector<int>arr = {23,12,56,89,4,67,34,32};
//    sort(arr.begin(),arr.end(),myCamp);
//    print(arr);
// }