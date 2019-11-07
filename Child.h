//
// Created by T10115885 on 11/7/2019.
//

#ifndef COMPOSITION_CHILD_H
#define COMPOSITION_CHILD_H

#include <string>
#include <ostream>

using namespace std;

class Child {
private:
    string name;
    int age;
public:
    Child();

    Child( const string &name, int age);

     string &getName() ;

    void setName( string &name);

    int getAge() ;

    void setAge(int age);

    friend ostream &operator<<(ostream &os,  Child &child);

};


#endif //COMPOSITION_CHILD_H
