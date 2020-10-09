#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    short int si = 100;
    int i = -1000;
    long int li = 1300;
    float f = 230.47;
    double d = 200.347;
    cout << "sqrt(si) :" << sqrt(si) << "\n";
    cout << "li to the power 3 :" << pow(li,3) << "\n";
    cout << "sin(d) :" << sin(d) << "\n"; //cos, tan also available
    cout << "absolute value of i :" << abs(i) << "\n";
    cout << "floor(d) :" << floor(d) << "\n";
    cout << "sqrt(f) : " << sqrt(f) << "\n";
    cout << "pow(d,2) : " << pow(d,2) << "\n";
    return 0 ;
}