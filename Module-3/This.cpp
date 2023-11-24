// WAP to print the value using this operator
#include <iostream>
using namespace std;
class Operator
{
public:
    int num = 43; // Data Member
    void Display()
    {
        int num = 87; // Local variable
        cout << endl
             << "Value of the dataMember is: " << this->num;
        cout << endl
             << "Value of the local is: " << num;
    }
};
int main()
{
    Operator opt; // Creating Object
    opt.Display();
    return 0;
}