#include <iostream>
using namespace std;

#include "Child.h"
#include "Parent.h"

int main() {

    Child baby;

    Parent mom;

    Child otherBaby("Carl", 3);

    Parent dad("Tom",otherBaby);


    cout<<"default baby = "<<baby<<endl;
    cout<<"default parent = "<<mom<<endl;
    cout<<otherBaby<<endl;
    cout<<dad<<endl;


    baby.setAge(1); // changes orginal not copy
    cout<<baby.getAge()<<endl;

    mom.getInfant().setAge(2);
    cout<<"default parent = "<<mom<<endl;


}
