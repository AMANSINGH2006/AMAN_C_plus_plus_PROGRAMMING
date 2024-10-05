#include<iostream>
using namespace std;
int getSum(int n){
   if(n == 0) return 0;
   int ans = n + getSum(n-1);
   return ans;
}
int main(){
    int n = 5;
    cout<<"Ans = "<<getSum(n);
}