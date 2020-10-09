#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c1[] = "Wow ";
    char c2[] = "What a beauty !";

    cout << "Concatenation : " << strcat(c1,c2) << "\n";
    cout << "Copy : " << strcpy(c2,c1) << "\n"; //source,dest
    cout << "Now print c2 and c1 to check " << c1 << " " << c2 << "\n" ;
    cout << "Length : " << strlen("ABC") << "\n";
    return 0 ;
}