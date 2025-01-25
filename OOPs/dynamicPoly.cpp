#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void draw(){ // if final keyword is used in this line this function can not be override
        cout<<"Generic drawing..."<<endl;
    }
};
class Circle : public Shape{
    public:
    void draw() override {
        cout<<"circle drawing..."<<endl;
    }
};
class Rectangle : public Shape{
    public:
    void draw() override {
        cout<<"rectangle drawing..."<<endl;
    }
};
class Triangle : public Shape{
    public:
    void draw() override {
        cout<<"triangle drawing..."<<endl;
    }
};

void shapedrawing(Shape *s){
    s->draw();
}

int main(){
    Circle c;
    Rectangle r;

    shapedrawing(&c);
    shapedrawing(&r);

    Triangle *t = new Triangle();
    shapedrawing(t);
    return 0;
}