#include<iostream>
using namespace std;

//this is to find the length
int length(int m){
    int count = 0;
    while(m--){
        m/=10;
        count++;
    }
    return count;
}
//this is to find the power
int power(int len){
    int temp = 1;
    while(len--){
        temp *= 10;
    }
    return temp;
}

int main(){
    int m,n;
    cout<<"Enter the number"<<endl;
    cin>>m>>n;
    int lenM = length(m);
    int powM = power(lenM-1);
    int lenN = length(n);
    int powN = power(lenN);
    int temp = ((m/powM)*powN)+n;
    // cout<<temp<<endl;
    int lenTemp = length(temp);
    int z = lenM - lenTemp;
    int last = power(z);
    temp = temp * last;
    m = m % last;
    temp = temp + m;
    cout<<temp;
}