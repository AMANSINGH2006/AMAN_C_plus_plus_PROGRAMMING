#include<iostream>
using namespace std;

class Abc{
    public:
    int x;
    int *y;
    
    //ctor using initialisation list
    Abc(int _x, int _y) : x(_x),y(new int(_y)){}

    //compiler dumb shallow copy
    // Abc(const Abc &obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

    //Our smart Deep copy
    Abc(const Abc &obj){
        x = obj.x;
        y = new int(*obj.y);
    }

    void print(){
        printf("X:%d\nPTR Y:%p\ncontent of Y:%d\n\n",x,y,*y);
    }
};
int main(){
    Abc a(1,2);
    a.print();

    Abc b(a);
    b.print();

    *b.y = 20;
    b.print();
    a.print();
    return 0;
}