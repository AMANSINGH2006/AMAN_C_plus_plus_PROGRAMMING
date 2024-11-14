#include<iostream>
using namespace std;
void findSubstring(string str,int start, int end){
   if(end == str.length()) return ;
   for(int i = start; i<=end; i++){
    cout<<str[i]<<" ";
   }
   cout<<endl;
   findSubstring(str,start,end+1);
}
int printSubarray(string str,int start,int end){
    for(int i = start; i < str.length(); i++){
        end = start;
        findSubstring(str,i,end);
    }
}
int main(){
    string str;
    cout<<"Enter string"<<endl;
    getline(cin,str);
    printSubarray(str,0,0); 
}