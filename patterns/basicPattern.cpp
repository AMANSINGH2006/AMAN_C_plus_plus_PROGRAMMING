#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
                        //   using for loop
//    int n,i=1,j=1;
// for(i=1;i<=n; i++){
//     for(j=1;j<=n;j++){
//         cout<<"#";
//     }
//     cout<<endl;
// }
    return 0;
}