using namespace std;

#include <iostream>
#include <string>

class Student
{
    public: 

    int id;
    string name;

    void put_details(int i, string n)
    {
        id = i;
        name = n;
    }

    void get_details()
    {
        cout << "id is " << id << " " << "and name is " << name;
    }

};

int main()
{
    int sid;
    string sname;
    Student s1;
    cout << "Enter student id \n";
    cin >> sid;
    cout << "Enter name of student \n";
    cin >> sname;
    s1.put_details(sid, sname);
    s1.get_details();
    return 0;
}