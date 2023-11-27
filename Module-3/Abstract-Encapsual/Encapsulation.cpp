// Wrapping up the data
#include <iostream>
using namespace std;
class Employee
{
protected:
    int id;
    string name, position;
    int salary;
    void set_data()
    {
        cout << "-----------------------------Dear " << position << "----------------------------" << endl;
        cout << name <<"," <<endl
             << "\tyour id " << id << "\n\tAnd salary is: " << salary;
    }

public:
    Employee()
    {
        cout << "Enter employee id:";
        cin >> id;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter employee position: ";
        cin >> position;
        cout << "Enter your salary: ";
        cin >> salary;
    }
    void show()
    {
        set_data();
    }
};
int main()
{
    Employee emp;
    emp.show();
    return 0;
}