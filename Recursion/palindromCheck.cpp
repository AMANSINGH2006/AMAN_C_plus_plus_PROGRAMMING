#include<iostream>
using namespace std;
bool palindrome(string str,int i,int j){
    if(i>=j)
    return true;
    if(str[i] != str[j]) return false;
    return palindrome(str,i+1,j-1);
    // bool a = palindrome(str,i+1,j-1);
    // return a;
}
int main(){
    string str = "racecar";
    int n = str.length()-1;
    int ans = palindrome(str,0,n);
    cout<<"Ans : "<<ans;
}