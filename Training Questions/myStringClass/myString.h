#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>
class Mystring{
    private:
    char *data;
    int length;

    //default ctor
    Mystring();

    //parameterised ctor
    Mystring(const char *str, int length);

    //copy ctor
    Mystring(const Mystring &other);

    // dtor
    ~Mystring();

    int size()const ;

    bool empty()const;
};


#endif
