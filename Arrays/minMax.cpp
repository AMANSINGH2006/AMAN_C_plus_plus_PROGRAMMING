#include<iostream>
using namespace std;
int getmax(int num[],int size){
    int max=INT16_MIN;
    for(int i=0;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getmin(int num[],int size){
    int min=INT16_MAX;
    for(int i=0;i<size;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int main()
{
   int s,m;
   int num[20];
   int size;
   cin>>size;
   for(int i=0;i<size;i++){
    cin>>num[i];
   }
   s=getmax(num,size);
   m=getmin(num,size);
   cout<<s<<" "<<m;
}