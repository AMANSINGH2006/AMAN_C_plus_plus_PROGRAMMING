#include <iostream>
using namespace std;
bool isprime(int num){
    if (num<=1){
        return false;
    }
    for(int i=2; i*i<num; i++){
     if(num%i == 0){
        return false;
     }
    }
    return true;
}
int main() {
   int n;
   cout<<"Enter the number:\n";
   cin>>n;
   for(int i = 1; i<=n; i++){
   bool checkprime = isprime(i);
    if(checkprime){
        cout<<i<<" ";
    }
   }
}