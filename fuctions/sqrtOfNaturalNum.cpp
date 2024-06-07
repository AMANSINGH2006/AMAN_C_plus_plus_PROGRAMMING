#include<iostream>
using namespace std;
int square(int x);
int main()
{
    int n;
    int ans;
    cout<<"Enter the number:\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        ans=square(i);
        cout<<ans<<endl;
    }
}
int square(int i)
{
   int ans;
   ans=i*i;
   return ans; 
}