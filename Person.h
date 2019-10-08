#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>

class Person{
private:
    std::string name;
    int age;
public:
    Person();

    std::string getName();
    void setName(std::string n);
};


#endif // PERSON_H_INCLUDED
