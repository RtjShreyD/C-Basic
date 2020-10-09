#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "ENter a number \n";
    cin >> a;
    cout << "ENter another number \n";
    cin >> b;
    cout << "ENter yet another number \n";
    cin >> c;

    if(a>b)
    {
        if(a>c)
        {
            cout << "a is greatest \n";
        }
    }
    
    else
    {
        if(b>c)
        {
            cout << "B is the greatest \n";
        }
        else
        {
            cout << "c is the greatest \n";
        }
        
    }
   return 0;
}