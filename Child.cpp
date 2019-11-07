//
// Created by T10115885 on 11/7/2019.
//

#include "Child.h"

Child::Child() {
    name = "Bob";
    age = 12;
}

Child::Child( const string &name, int age) : name(name), age(age) {}

 string &Child::getName()  {
    return name;
}

void Child::setName( string &name) {
    Child::name = name;
}

int Child::getAge()  {
    return age;
}

void Child::setAge(int age) {
    Child::age = age;
}

ostream &operator<<(ostream &os,  Child &child) {
    os << "name: " << child.name << " age: " << child.age;
    return os;
}
