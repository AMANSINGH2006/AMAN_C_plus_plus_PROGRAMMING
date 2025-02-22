#include<iostream>
#include<string.h>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<< "Animals making sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    void sound() override {
        cout<< "Dogs Barking..."<<endl;
    }
};
class Cat : public Animal{
    public:
    void sound() override {
        cout<< "Cats meowing..."<<endl;
    }
};
class Parrot : public Animal{
    public:
    void sound(){
        cout<< "Parrot mithu mithu..."<<endl;
    }
};

void sound(Animal *animal){
    animal->sound();
}

int main(){
    // UPCAUSTING
    Animal *animal = new Dog();
    animal->sound();

    animal = new Cat();
    sound(animal);

    animal = new Parrot();
    sound(animal);

    //DOWN CAUSTING
    // Dog *d = new Animal();
    // d->sound();

    return 0;
}