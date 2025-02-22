#include<iostream>
#include<string.h>
using namespace std;

class Bird{
public:
    int age, weight, nolegs;
    string color;

    void eat(){
        cout<<"Eating..."<<endl;
    }
    void fly(){
        cout<<"flying..."<<endl;
    }
};
class Sparrow : public Bird{
public:
    Sparrow(int age, int weight, int legs, string color){
        cout<<"ctor of sparrow is called"<<endl;
        this->age = age;
        this->weight = weight;
        this->nolegs = legs;
        this->color = color;
    }

    void grassing(){
        cout<<"grassing..."<<endl;
    }
};
class Pigeon : public Bird{
public:
    void guttering(){
        cout<<"guttering..."<<endl;
    }
};

int main(){
    Sparrow s(2, 1.3, 2, "Aqua");
    cout<<s.color<<endl;
    Pigeon p;
    
    return 0;
}