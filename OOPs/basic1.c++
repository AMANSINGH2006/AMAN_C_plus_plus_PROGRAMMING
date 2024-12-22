#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    // Attribute
    int id;
    int age;
    string name;
    int nos;

    //ctor:Default ctor
    Student(){
        cout<<"Student Default ctor called"<<endl;
    }

    //Parameterised constructor
    Student(int id, int age, string name, int nos){
        cout<< "Student parameterised ctor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    // copy ctor
    Student(const Student &srcObj) //srcObj => A
    {
        cout<<"copy ctor called"<<endl;
        this->id = srcObj.id;
        this->age = srcObj.age;
        this->name = srcObj.name;
        this->nos = srcObj.nos;
    }

    //Behaviour / Methods / Functions
    void study(){
        cout<< this->name << " studying"<<endl;
    }
    void sleep(){
        cout<< this->name << " Sleeping"<<endl;
    }
    void bunk(){
        cout<< this->name << " Bunking"<<endl;
    }

    //dtor Default
    ~Student(){
        cout<<"Student Default dtor called"<<endl;
    }

};

int main(){
    // Student A;
    // A.id = 33;
    // A.name = "Aman";
    // A.age = 23;
    // A.nos = 4;
    // A.study();

    // Student B;
    // B.id = 4;
    // B.name = "Anchal";
    // B.age = 22;
    // B.nos = 7;
    // B.bunk();

    //Parameterised ctor
    Student A(33,23,"Aman",4);
    // Student B(4,22,"Anchal",4);

    // cout<<A.name<<" "<<A.id<<endl;
    // cout<<B.name<<" "<<B.id<<endl;
    // A.sleep();
    // B.bunk();

    //copy ctor
    Student C = A;
    cout<<C.name<<" "<<C.id<<endl;

    //Dynamic memory allocation
    Student *D = new Student(234,34,"Anshika",3);
    cout<<D->name<<endl;
    cout<<D->age<<endl;
    delete D;
    return 0;
}