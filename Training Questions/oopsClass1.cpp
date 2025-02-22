#include<iostream>
#include<string.h>
using namespace std;

//this is a pointer that points to the current object
class Student{
private:
    string gf;
public:
    // Attribute/state/properties
    int id;
    int age;
    bool present;
    string name;
    int nos;
    int *v;
    
    // default ctor
    Student(){
        cout<<"Default ctor is called"<<endl;
    }

    //parameterized ctor
    Student(int _id, int _age, bool _present, string _name, int _nos, string _gf, int v){
        cout<<"parameterized ctor is called"<<endl;
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        gf = _gf;
        this->v = new int(10);
    }
    Student(int _id, int _age, bool _present, string _name, int _nos){
        cout<<"parameterized ctor is called"<<endl;
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
    }

    //Copy ctor
    Student(const Student &srcObj){
        cout<<"Copy ctor is called"<<endl;
        this->id = srcObj.id;
        this->age = srcObj.age;
        this->present = srcObj.present;
        this->name = srcObj.name;
        this->nos = srcObj.nos;
    }
    
    //behaviour/method/function
    void study(){
        cout<<"studying"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }

    //dtor of student
    ~Student(){
        cout<<"dtor of student is called"<<endl;
        delete v;
    }
    
};
int main(){
    // Student s1;
    // // cout<<s1.id; // this will give garbage value
    // cout<<"Size of s1 is : "<< sizeof(s1) <<endl;

    // Student s2(33,22,1,"Aman",3,"Gudiya");
    // // cout<<s2.gf<<endl; //inaccesible
    // cout<<s2.age<<endl;
    // cout<<s2.name<<endl;

    // Student s3(53,23,1,"Abhi",3);
    // cout<<s3.id<<endl;
    // cout<<s3.name<<endl;

    // //Dynamic memory allocation
    // // int *a = new int(5);
    // Student *s4 = new Student(30,22,1,"Lado",3,"Anchal");
    // cout<<s4->id<<endl;
    // cout<<(*s4).name<<endl;
    // delete s4;

    //copy ctor
    Student s5(30, 22, 1, "Lado", 3, "Anchal", 12);
    Student s6 = s5;    //OR Student s6(s5);
    cout<<s5.name<<endl;
    cout<<s6.name<<endl;

    return 0;
}