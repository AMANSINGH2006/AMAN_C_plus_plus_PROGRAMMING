#include<iostream>
using namespace std;
void reverseString(string str,int i,string &ans){
    if(i == str.length())
    return;
    reverseString(str,i+1,ans);
    ans.push_back(str[i]);
}
int main(){
    string str = "abcdef";
    string ans = "";
    reverseString(str,0,ans);
    cout<<"Ans : "<<ans;
}