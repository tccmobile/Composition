//
// Created by T10115885 on 11/7/2019.
//

#include "Parent.h"

Parent::Parent() { Child temp; infant = temp; name = "sue"; }

Parent::Parent( const string &name,  Child &infant) : name(name), infant(infant) {}

 string &Parent::getName()  {
    return name;
}

void Parent::setName( string &name) {
    Parent::name = name;
}

 Child &Parent::getInfant() {
    return infant;
}

void Parent::setInfant( Child &infant) {
    Parent::infant = infant;
}

ostream &operator<<(ostream &os,  Parent &parent) {
    os << "name: " << parent.name << " infant: " << parent.infant;
    return os;
}
