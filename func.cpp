#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x+y;
}
 // function overloading
double add(double x, double y)
{
    return x+y;
}

int main()
{
    cout << add(3,4) << endl;
    cout << add(3.14,4.263) << "\n";
    return 0;
}