#include<iostream>
#include<vector>
using namespace std;
int findSquare(int num){
    int target = num;
    int start = 0;
    int end = num/2;
    int mid = (start+end)/2;
    int ans = -1;
    while(start<=end){
        if (mid*mid == target){
            return mid;
        }
        else if(mid*mid > target){
            end = mid-1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int ans = findSquare(num);  //ans->4
    // cout<<ans;

    int precision;
    cout<<"Enter the precision value";
    cin>>precision;
    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++){
        for (double j = finalAns; j*j<=num; j = j + step){
            finalAns = j;
        }
        step=step/10;
    }
    cout<<"Ans = "<<finalAns;
    return 0;
}