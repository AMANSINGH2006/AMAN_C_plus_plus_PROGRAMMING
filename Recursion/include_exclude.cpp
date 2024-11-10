#include<iostream>
#include<vector>
using namespace std;
void findSubsequence(string str, int index, vector<string>&ans, string output){
    if(index == str.length()){
        ans.push_back(output);
        return ;
    }
    char ch = str[index];
    //include pattern of subsequence
    findSubsequence(str,index+1,ans,output+ch);
    //exclude pattern of subsequence
    findSubsequence(str,index+1,ans,output);
}
int main(){
    string str = "abc";
    vector<string>ans;
    string output = "";
    int index = 0;
    findSubsequence(str,index,ans,output);
    cout<<"The subsequences length is : "<<ans.size()<<endl;
    for(auto s : ans){
        cout<<s<<endl;
    }
}