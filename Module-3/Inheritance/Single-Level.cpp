#include <iostream>
using namespace std;
class Base
{
public:
    int no1, no2;
    void getdata(int no1, int no2)
    {
        this->no1 = no1;
        this->no2 = no2;
    }
};
class Derived : public Base
{
public:
    int setdata()
    {
        return no1 + no2;
    }
};
int main()
{
    Derived d1;
    d1.getdata(55, 5);
    cout << endl
         << d1.setdata();
    return 0;
}