#include<iostream>
using namespace std;
float sum(float,float);      //function declaration
int main()
{
    sum(4.5,8.3);              //function calling
}
float sum(float x,float y)   //function definition
{
    float sum;
    // cout<<"Enter the number:\n";
    // cin>>a>>b;
    sum=x+y;
    return sum;
}