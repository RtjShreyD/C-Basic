/* Constructors are special functions of a class which are
 use to initialise the attribute of a class. Name of constructor
 and name of class are always same. Constructors are of two types
 1. Parameterised  2. Non Parameterised */

#include <iostream>

using namespace std;

class MyClass
{
    public:
    int a,b;
    
    MyClass(int x, int y)
    {
        a=x;
        b=y;
    }

    void print()
    {
        cout << "a : " << a << " b : " << b << "\n";
    }
};

int main()
{
    MyClass m1(10,20);
    m1.print();
    return 0;
}