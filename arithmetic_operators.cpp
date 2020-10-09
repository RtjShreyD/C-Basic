#include <iostream>

using namespace std;

int main()
{
    int a,b,c = 0;

    cout << "Enter first number \n";
    cin >> a;
    cout << "Enter second number \n";
    cin >> b;
    cout << "Unary operation(++a) and (b++) :" << ++a << " " << b++ << "\n";
    cout << "Binary Operation(a*b) : " << a*b << "\n";
    cout << "Ternary Operator : " << ((a>b)?a:b)<<"\n";
    cout << "Relational Operator : " << (a<b) << "\n";
    cout << "Logical Operator :" << (true && false) << "" <<(true && false) << "" << (true||false) << "\n";
    cout << "Assignment Operator : Sum: c = " << (c+=a) << "\n";
    return 0;

}