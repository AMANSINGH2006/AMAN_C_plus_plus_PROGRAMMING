#include<iostream>
#include<string.h>
using namespace std;

class Vehicle{
// public:
protected:
    string name;
    string model;
    int noOfTyres;
    // ctor of class vehicle
    Vehicle(string _name, string _model, int _noOfTyres){
        cout<<"I am inside vehicle class"<<endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }
public:
    void startEngine(){
        cout<<"Engine is starting of "<< name <<" "<< model <<endl;
    }
    void stopEngine(){
        cout<<"Engine is stopping of "<< name <<" "<<model <<endl;
    }
    ~Vehicle(){
        cout<<"dtor of vehicle is called"<<endl;
    }
};

class Car : public Vehicle{
public:
    int noOfDoors;
    string transmissionType;
    // ctor of class Car
    Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType):Vehicle(_name, _model, _noOfTyres){
        cout<<"I am inside Car class"<<endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }
    string getName(){
        return this->name;
    }
public:
    void startAC(){
        cout<<"AC has started of "<< name <<endl;
    }
    ~Car(){
        cout<<"dtor of Car is called"<<endl;
    }
};

class MotorCycle : public Vehicle{
public:
    string handleBarStyle;
    string suspensionType;
//ctor of motorCycle class
    MotorCycle(string _name, string _model, int _noOfTyres, string _handleBarStyle, string _suspensionType):Vehicle(_name, _model, _noOfTyres){
        this->handleBarStyle = _handleBarStyle;
        this->suspensionType = _suspensionType;
    }
    void wheeli(){
        cout<<"wheelie is rounding"<<endl;
    } 
    ~MotorCycle(){
        cout<<"dtor of MotorCycle is called"<<endl;
    }    
};

int main(){
    Car A("Maruti-800","LXI",4,4,"Manual");
    cout<<A.getName()<<endl;
    A.startEngine();
    A.startAC();
    A.stopEngine();

    MotorCycle M("Hero","VXI",2,"U","hard");
    // M.name;
    M.startEngine();
    M.wheeli();
    M.stopEngine();
    return 0;
}