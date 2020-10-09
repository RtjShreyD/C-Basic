#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream MyFile("abcd.txt");
    MyFile << "This is shd";

    MyFile.close();

    string myText;

    ifstream MyReadFile("abcd.txt");

    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }
    
    return 0;
}