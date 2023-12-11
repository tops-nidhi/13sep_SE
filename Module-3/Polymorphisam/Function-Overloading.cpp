#include <iostream>
using namespace std;
class A
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    A a1;
    cout<< endl<< a1.add(5, 6);
    cout<< endl<< a1.add(5,2,6);
    return 0;
}