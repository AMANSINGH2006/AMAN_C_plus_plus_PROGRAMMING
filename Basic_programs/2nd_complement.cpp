#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,1,0,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>twoComp(n+1,0);
    for(int i = n-1,k = twoComp.size() - 1; i>=0; k--,i--){
        twoComp[k] = arr[i] == 0 ? 1 : 0;
    }
    cout<<"The 2's Complement is : ";
    int carry = 1;
    for(int i = twoComp.size()-1; i>=0; i--){      
        int sum = twoComp[i] + carry;
        twoComp[i] = sum % 2;                       
        carry/=2;                     
    }
    if(carry) twoComp[0] = 1;
    for(int i : twoComp){
        cout<<i<<" ";
    }
}