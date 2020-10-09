/* Inheritence is termed as the incident when a class gains 
direct or indirect access to other class's attributes and 
properties. Ther class being inherited is known as base class
and the class which inherits is known as the sub class.
Subclass has access to public and protected members 
of the base class. 

Types of Inheritence -
1. Single Inheritence
2. Multiple Inheritence
3. Hierarchial Inheritence
4. Multilevel Inheritence
5. Hybrid Inheritence */ 

#include <iostream>
using namespace std;

class Dimensions
{
    public :
    float side = 10.67;
};

class Square : public Dimensions 
{
    public :
    double area(double x)
    {
        return (x*x);
    }
};

int main()
{
    Square s1;
    cout << "Area of sq :" << s1.area(s1.side);
    return 0;
}