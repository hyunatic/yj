#include <iostream>
#include "person.h"
#include <string>

using namespace std;

Person::Person(){}
std::string Person::getName(){
    return name;
}
void Person::setName(std::string n){
    name = n;
}
