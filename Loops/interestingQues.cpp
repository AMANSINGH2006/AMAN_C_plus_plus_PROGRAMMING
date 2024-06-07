#include<iostream>
using namespace std;
int main(){
    int a,b,sum=0,sub=0,mul=0,div=0;
    char choice;
    do{
        cout<<"/*********************************/"<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"Q.Quite"<<endl;
        cout<<"Enter your choice :"<<endl;
        cin>>choice;
        switch (choice)
        {
        case '1':
            cout<<"You chose 1...Addition"<<endl;
            cout<<"Enter two number separated by space :";
            cin>>a>>b;
            sum=a+b;
            cout<<"The addition is: "<<sum<<endl;
            break;
        case '2':
            cout<<"You chose 2...Subtraction"<<endl;
            cout<<"Enter two number separated by space :";
            cin>>a>>b;
            sub=a-b;
            cout<<"The Subtraction is: "<<sub<<endl;
            break;
        case '3':
            cout<<"You chose 3...Multiplication"<<endl;
            cout<<"Enter two number separated by space :";
            cin>>a>>b;
            mul=a*b;
            cout<<"The multiplication is: "<<mul<<endl;
            break;
        case '4':
            cout<<"You chose 4...Division"<<endl;
            cout<<"Enter two number separated by space :";
            cin>>a>>b;
            div=a/b;
            cout<<"The division is: "<<div<<endl;
            break;
        case 'Q':
            cout<<"You chose Q...Quite"<<endl;
            cout<<"Good bye !!!"<<endl;
            break;
        case 'q':
            cout<<"You chose q...Quite"<<endl;
            cout<<"Good bye !!!"<<endl;
            break;
        default:
            cout<<"You have entered wrong option !!. Try again"<<endl;
            break;
        }
    }while(choice != 'q' && choice != 'Q');
}