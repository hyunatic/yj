#include <iostream>
#include "person.h"


using namespace std;

int main()
{
    Person a;
    a.setName("test");
    cout << a.getName() << endl;
    return 0;
}
