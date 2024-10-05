#include<iostream>
using namespace std;
int power(int n){
    if(n == 0){
        return 1;
    }
    int finalAns = 2 * power(n-1); //2 ki power n
    return finalAns;
}
int main(){
    int n;
    cout<<"Enter the number :\n ";
    cin>>n;
    int ans = power(n);
    cout<<"ans = "<<ans;
}