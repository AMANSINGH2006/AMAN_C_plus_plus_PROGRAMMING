#include<iostream>
using namespace std;
int lastOccurenceOfChar(string str,char target,int i,int &ans){
    if(i == str.length())
    return 0;
    if(str[i] == target){
       ans = i;
    }
    lastOccurenceOfChar(str,target,i+1,ans);

}
int main(){
    string str = "absddbsdh";
    char target = 'd';
    int ans = -1;
   lastOccurenceOfChar(str,target,0,ans);
    cout<<"Ans : "<<ans;
}