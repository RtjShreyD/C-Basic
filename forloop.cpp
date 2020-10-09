#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<=8; i++)
    {
        if(i%2 == 0)
        {
            cout << "even number " << i << "\n";
        }
        else
        {
            cout << "odd number " << i << "\n";
        }
        
    }
    return 0;
}