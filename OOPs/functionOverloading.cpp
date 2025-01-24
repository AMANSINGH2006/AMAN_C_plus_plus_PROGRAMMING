#include<iostream>
using namespace std;

class Add{
public:
    int sum(int x, int y){
        cout<<"sum of 2 int : ";
        return x + y;
    }
    int sum(int x, int y, int z){
        cout<<"sum of 3 int : ";
        return x + y + z;
    }
    double sum(double x, double y){
        cout<<"sum of 2 double : ";
        return x + y;
    }
};

int main(){
    int x = 10, y = 12, z = 8;
    Add add;
    cout<<add.sum(x,y)<<endl;
    cout<<add.sum(x,y,z)<<endl;
    cout<<add.sum(3.4, 5.8)<<endl;
}