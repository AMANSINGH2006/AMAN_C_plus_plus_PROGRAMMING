#include<iostream>
using namespace std;
#define PI 3.14
float area(int);
float circ(int);
int main()
{
    float r,ans;
    cout<<"Enter the number:\n";
    cin>>r;
        ans=area(r);
        cout<<ans<<endl;
        ans=circ(r);
        cout<<ans<<endl;
}
float area(int r)
{
   float area;
   area=PI*(r*r);
   return area; 
}
float circ(int r)
{
   float circ;
   circ=2*PI*r;
   return circ; 
}