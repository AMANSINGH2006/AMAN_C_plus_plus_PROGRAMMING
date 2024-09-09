#include<iostream>
using namespace std;

int getLength(char ch[]){
    int i =0;
    int c = 0;
    while(ch[i] != '\0'){
        c++;
        i++;
    }
    return c;
}

void reverseCharacter(char arr[],int size){
    int i = 0;
    int j = getLength(arr)-1;
    while(j>=i){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

bool palindrom(char arr[],int size){
    int i = 0;
    int j = getLength(arr) - 1;
    while(i<=j){
        if(arr[i] == arr[j]){
        i++;
        j--;
        }
        else
            return false;
    }
    return true; 
}

int main(){
    char arr[100];
    cout<<"Enter your character please : "<<endl;
    cin.getline(arr,30);
    // reverseCharacter(arr,30);
    if(palindrom(arr,30))
        cout<<"This is palindrom";
    else
        cout<<"This is not a palindrom";
    // cout<<arr;
}