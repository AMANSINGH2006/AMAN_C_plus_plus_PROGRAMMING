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

void replaceCharacter(char name[],int size){
    int i = 0;
    while(name[i] != '\0'){
        if(name[i] == '@'){
            name[i] = ' ';
        }
        i++;
    }
    cout<<"Array after replacing @ : "<<name;
}

int main(){
    char name[50];
    cout<<"Enter your name : "<<endl;
    // cin.getline(name,20);
    cin.getline(name,30);
    replaceCharacter(name,30);
    // cout<<getLength(name,30);

    // cin>>name;
    // cout<<"Name : "<<name;

    // cin.getline(name,30);
    // cin.getline(name,30,'\t');
    // cin.getline(name,30,'a');
    // cout<<"Name : "<<name;

    // cin>>name;
    // cout<<"your Name is : "<<name<<endl;
    // cin.getline(name,20,'\t');

    // cin.getline(name,20);
    // // cout<<"Your full Name is : "<<name;
    // cout<<"Your full Name is : "<<endl;
    // cout<<name[0]<<" --> "<<(int)name[0]<<endl;
    // cout<<name[1]<<" --> "<<(int)name[1]<<endl;
    // cout<<name[2]<<" --> "<<(int)name[2]<<endl;
    // cout<<name[3]<<" --> "<<(int)name[3]<<endl;
    // cout<<name[4]<<" --> "<<(int)name[4]<<endl;
}