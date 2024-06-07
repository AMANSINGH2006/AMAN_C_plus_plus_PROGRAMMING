#include<iostream>
using namespace std;
int main(){
    char alphabet;
    cout<<"Enter an alphabet:"<<endl;
    cin>>alphabet;
    switch (alphabet){
    case 'a':
        cout<<"is a vowel";
        break;
    case 'e':
        cout<<"is a vowel";
        break;
    case 'i':
        cout<<"is a vowel";
        break;
    case 'o':
        cout<<"is a vowel";
        break;
    case 'u':
        cout<<"is a vowel";
        break;
    default:
        cout<<"it is neighter vowel nor consonant";
        break;
    }
}