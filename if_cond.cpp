#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "ENter a number \n";
    cin >> a;
    cout << "ENter another number \n";
    cin >> b;

    if(b>a)
    {
        cout << "b is greater \n";
    }

    else if (b==a)
    {
        cout << "b is equal to a \n";
    }
    
    else
    {
        cout << "a is greater \n"; 
    }
    return 0;
}