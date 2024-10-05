#include<iostream>
using namespace std;
int counting(int n){
    if(n == 0) return 0;
    cout<<n;
    counting(n-1);
}
int main(){
   int n;
   cout<<"Enter the number :\n";
   cin>>n;
   counting(n);
}