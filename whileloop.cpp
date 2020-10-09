#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while(i <= 8)
    {
        if(i%2 == 0)
        {
            cout << "even number " << i << "\n";
        }
        else
        {
            cout << "odd number " << i << "\n";
        }
        
        i++;
    }
    return 0;
}