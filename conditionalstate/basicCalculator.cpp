#include<iostream>
using namespace std;
int main(){
    int a,b,sum,sub,mul,divide,modulo;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    cout<<"Enter the operator(+,-,*,/,%):"<<endl;
    char operatoration;
    cin>>operatoration;
    switch(operatoration){
      case '+':
        sum=a+b;
        cout<<"the sum of numbers is:"<< sum;
        break;
      case '-':
        sub=a-b;
        cout<<"the subtraction of numbers is:"<< sub;
        break;
      case '*':
        mul=a*b;
        cout<<"the multiplication of numbers is:"<< mul;
        break;
      case '/':
        divide=a/b;
        cout<<"the division of numbers is:"<< divide;
        break;
      case '%':
        modulo=a%b;
        cout<<"the modulus of numbers is:"<< modulo;
        break;
      default:
        cout<<"You have enter an invalid operator please enter a valid operator !!";
    }
}