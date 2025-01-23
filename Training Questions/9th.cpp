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
    int lenN = length(n);
    int d2 = lenM/2;
    // cout<<d2<<endl;
    int powM = power(d2);
    int powN = power(lenN);
    int part = m/powM;
    part *= powN;
    // cout<<part;
    part += n;
    part = part * power(d2);
    m = m % power(d2);
    part += m;
    cout<<part;
}