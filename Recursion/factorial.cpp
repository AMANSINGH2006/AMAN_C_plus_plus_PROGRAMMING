#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 1){
        return 1;
    }
    int fact = n * factorial(n-1);
    return fact;
}
int main(){
    int fact,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<"ans = "<<ans;
}