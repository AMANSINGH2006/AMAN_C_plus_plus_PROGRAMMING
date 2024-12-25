#include<iostream>
#include<vector>
using namespace std;

class Student{
// public:
//     int age;
//     int id;
//     string name;
//     int nos;
// private:
//     float gpa;
//     string gf;

    /************************ perfect encapsulation ************************/
private:
    int age;
    int id;
    string name;
    int nos;
    float gpa;
    string gf;

public:
            //layer of authendication
    void setGpa(float marks){
        this->gpa = marks;
    }
    float getGpa() const{
        return this->gpa; 
    }
    string getgf() const{
        return this->gf;
    }

    // using parameterised ctor
    Student(int age, int id, string name, int nos, float gpa, string gf){
        cout<<"parameterised ctor called"<<endl;
        this->age = age;
        this->id = id;
        this->name = name;
        this->nos = nos;
        this->gpa = gpa;
        this->gf = gf;
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
    
    //dtor 
    ~Student(){
        cout<<"destructor called"<<endl;
    }

private:
    void gfChatting(){
        cout<<"gf chatting"<<endl;
    }
public:
    void getgfChatting() const{
        cout<<"Not chatting with anyone"<<endl;
    }

};

int main(){
    Student A(23,33,"Aman",4,7.0,"Anshika");
    // cout<<A.name<<endl;
    // cout<<A.gf<<endl;
    // A.gfChatting();

    cout<<A.getGpa()<<endl;
    A.setGpa(7.8);
    cout<<A.getGpa()<<endl;
    cout<<A.getgf()<<endl;
    A.getgfChatting();

    A.sleep();
}