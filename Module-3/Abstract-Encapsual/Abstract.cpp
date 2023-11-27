// Abstraction is use to hide the background detail which was unnecessary for the user
#include <iostream>
using namespace std;
class Abstract
{
    int no;
    string name;

public:
    Abstract() // Default constructor
    {
        cout << "Enter your no: ";
        cin >> no;
        cout << "Enter your name: ";
        cin >> name;
    }
    void set_data()
    {
        cout << name << " your no is: " << no;
    };
};
int main()
{
    Abstract abs;
    abs.set_data();
    return 0;
}