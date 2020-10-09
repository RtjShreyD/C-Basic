#include <iostream>
using namespace std;

int main()
{
    int a = 0;

    switch(a)
    {
        
        case 1:
            cout << "1 is stored in a \n";
            break;
        
        case 2:
            cout << "2 is stored in a \n";
            break;
        
        case 3:
            cout << "3 is stored in a \n";
            break;
        
        default:
            cout << "None of the values match \n";
            break;

    }
    return 0;
}