#include<iostream>
using namespace std;

class complex{
public:
    int real;
    int imag;
    //default ctor
    complex(){
        real = imag = -1;
    }
    //parameterised ctor
    complex(int r, int i) : real(r), imag(i){}

    complex operator+(const complex &B){
        complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }

    complex operator-(const complex &B){
        complex temp;
        temp.real = this->real - B.real;
        temp.imag = this->imag - B.imag;
        return temp;
    }

    void print(){
        printf("[%d + i%d]\n",this->real, this->imag);
    }

};
int main(){
    complex A(2,5);
    A.print();
    
    complex B(3,4);
    B.print();

    complex C = A + B;
    C.print();

    complex D = A - B;
    D.print();
    return 0;
}