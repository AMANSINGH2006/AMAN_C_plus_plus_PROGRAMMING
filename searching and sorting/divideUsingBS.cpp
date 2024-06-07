#include<iostream>
using namespace std;
int divByBinary(int dividend, int divisor){
    int s = 0;
    int e = abs(dividend);
    int mid = (s+e)/2;
    int ans = 0;
    while(s<=e){
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
            break;
        }
         if(abs(mid*divisor) > abs(dividend)){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    if(divisor<0 && dividend<0 || divisor>0 && dividend>0){
        return ans;
    }
    else
        return -ans;
}
int main(){
    int dividend,divisor,precision;
    cout<<"Enter the Dividend :"<<endl;
    cin>>dividend;
    cout<<"Enter the Divisor :"<<endl;
    cin>>divisor;
    int ans = divByBinary(dividend,divisor);
    // cout<<ans;
                                                // For decimal -->
    cout<<"Enter the precision you Want:"<<endl;
    cin>>precision;
    double finalAns = ans;
    double step = 0.1;
    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*divisor<=dividend; j=j+step){
            finalAns=j;
        }
        step/=10;
    }
    cout<<finalAns;
}