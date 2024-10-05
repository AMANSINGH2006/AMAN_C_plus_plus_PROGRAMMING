#include<iostream>
using namespace std;
int fibo(int n){
   if(n == 0 || n == 1){
    return n;
   }
   int ans = fibo(n-1) + fibo(n-2);
   return ans;
}
int main(){
    int n = 9;
    int finalAns = fibo(n);
    cout<<"ans = "<<finalAns;   
}