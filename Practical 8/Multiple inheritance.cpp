#include <iostream>
using namespace std;

class basicInfo
{
public:
    string name;
    int age;

    void acceptBasicInfo()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void displayBasicInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};

class deptInfo
{
public:
     string department;
   
    void acceptDeptInfo()
    {
        cout << "Enter department: ";
        cin >> department;
    }

    void displayDeptInfo()
    {
        cout << "Department: " << department << endl;
    }

};

class Employee : public basicInfo, public deptInfo
{
public:
    void acceptEmpInfo()
    {
        acceptBasicInfo();
        acceptDeptInfo();
    }

    void displayEmpInfo()
    {
        displayBasicInfo();
        displayDeptInfo();
    }
};

int main()
{
    Employee e1, e2;

    e1.acceptEmpInfo();
    e1.displayEmpInfo();

    return 0;
}
