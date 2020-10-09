#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Bhaukaali baba"; 
    string* ptr = &name;

    cout << name << "\n";

    cout << &name << "\n";

    cout << ptr << "\n";
    
    return 0;
}