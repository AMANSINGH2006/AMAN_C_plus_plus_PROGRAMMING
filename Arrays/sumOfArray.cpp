#include<iostream>
using namespace std;
int getSum(int num[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+num[i];
    }
    return sum;
}
int main(){
    int num[20];
    int size,sum;
    cout<<"Enter the size of Arrays:"<<endl;
    cin>>size;
    for(int i=0; i<size;i++){
        cin>>num[i];
    }
    sum=getSum(num,size);
    cout<<"Sum of numbers of Array is : "<<sum;
}