#include<iostream>
using namespace std;
int add(int x,int y);
float add(float x,float y);
float add(float x,float y,float z);
int main()
{
    float ans;
    ans=add(5.7,6.9,7.1);
    cout<<ans;
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
float add(float a,float b,float c)
{
    sum=a+b+c;
    float sum;
    return sum;
}
float add(float a,float b)
{
    float sum;
    sum=a+b;
    return sum;
}