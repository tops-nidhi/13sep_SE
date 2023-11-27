// WAP to get and set the num using parametrize constructor
#include <iostream>
using namespace std;
class Parametrize
{
    int no;

public:
    Parametrize(int no) // Parametrize Constructor
    {
        this->no = no;
    }
    inline int show() { return no; }
};
int main()
{
    Parametrize para(67);
    cout << "Value of the no is: " << para.show();
    return 0;
}