#include <iostream>
using namespace std;
class Operate
{
public:
    int no;
    void get(int no)
    {
        this->no = no;
    }
    int show()
    {
        cout << endl
             << "value of the no is: " << no;
        return 0;
    }
    Operate operator+(Operate &obj2)
    {
        Operate obj3;
        obj3.no = no + obj2.no;
        return obj3;
    }
};
int main()
{
    Operate opt1;
    Operate opt2;
    Operate opt3;
    opt1.get(50);
    opt2.get(5);
    opt3 = opt1 + opt2;
    opt3.show();
    return 0;
}