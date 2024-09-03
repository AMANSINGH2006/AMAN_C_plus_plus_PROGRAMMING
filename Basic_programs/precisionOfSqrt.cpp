#include<iostream>
#include<iomanip>               //for using setprecision() function
using namespace std;
int main(){
    int target = 63;
    double ans = 7;
    int precision = 10;
    double step = 0.1;
    while(precision--){
        double j = ans;     // ans --> 7.0
        while(j*j <= target){
            ans = j;
            j+=step;       //7.1
        }
        step = step/10;
    }
    cout<<"final Ans = "<<ans<<endl;  // this will log in only 5 precision 

    setprecision(10);
    cout<<"set precision to 10 : "<<setprecision(10)<<ans<<endl;  // M1---> this will print in only (10-1) precision

    printf("For increae precision : %.10f",ans);  // M2---> This will increase the precision range to 10
}