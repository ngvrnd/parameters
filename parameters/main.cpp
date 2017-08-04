// *** ADDED BY HEADER FIXUP ***
#include <istream>
// *** END ***
#include <iostream>
#include "Parameter.h"

using namespace std;

int main()
{
    Parameter<double> p(21.3);

    cout << "Hello world! parameter p's value is " << *p << endl;
    p.set_value(22);
    cout << " now it is " << *p << endl;
    p.reset();
    cout << " but after reset it is again " << *p << endl;
    p = 32;
    cout << " now it is " << *p << endl;
    //p += 2;
    p.reset();
    cout << " but after reset it is again " << *p << endl;

    double d;

    d = p;

    cout << " after assignment, d has value " << d << endl;
    d = 127;

    p = d;
    cout << " d is now 127; after p = d; p is " << *p << endl;

    cout << "finally, " << p << endl;

    Parameter<int32_t> q(2112);

    cout << "parameter q is " << q << endl;

    q = 73913;


    cout << "after assignment parameter q is " << q << endl;

    q.reset();


    cout << "after reset, parameter q is " << q << endl;

    Parameter<string> foo("bar");

    cout << "foo is " << foo.get_value() << ", and";

    foo = string("gnorf");

    cout << " after assignment foo is " << foo.get_value() << endl;

    foo.reset();


    cout << " after reset foo is " << foo.get_value();


    return 0;
}
