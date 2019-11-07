//
// Created by T10115885 on 11/7/2019.
//

#ifndef COMPOSITION_PARENT_H
#define COMPOSITION_PARENT_H

#include <string>
#include <ostream>

using namespace std;

#include "Child.h"

class Parent {
private:
    string name;
    Child infant;
public:
    Parent();

    Parent( const string &name,  Child &infant);

     string &getName() ;

    void setName( string &name);

    Child &getInfant();

    void setInfant( Child &infant);

    friend ostream &operator<<(ostream &os, Parent &parent);

};


#endif //COMPOSITION_PARENT_H
