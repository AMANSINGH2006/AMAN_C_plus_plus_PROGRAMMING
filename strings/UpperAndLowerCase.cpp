#include<iostream>
using namespace std;

int getLength(char arr[],int size){
    int count = 0;
    int length = 0;
     while(arr[length] != '\0'){
       count++;
       length++;
    }
    return count;
}

 void convertIntoUpperCase(char ch[],int n){
    int len = getLength(ch,n);
    for(int i = 0; i<len; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z')
        ch[i] = ch[i] - 'a' + 'A';
    }
 }

 void convertIntolowerCase(char ch[],int n){
    int len = getLength(ch,n);
    for(int i = 0; i<len; i++){
        if(ch[i] >= 'A' && ch[i] <= 'Z')
        ch[i] = ch[i] - 'A' + 'a';
    }
 }

int main(){
    char ch[50];
    cout<<"Enter the character"<<'\n';
    cin>>ch;
    // convertIntoUpperCase(ch,100);
    convertIntolowerCase(ch,100);
    cout<<ch;
}