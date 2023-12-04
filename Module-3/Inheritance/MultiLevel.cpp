#include <iostream>
#include <math.h>
using namespace std;
class A
{
public:
    int x, y;
    void getData(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
};
class Add : public A
{
public:
    inline int add()
    {
        return x + y;
    }
};
class Cube : public Add
{
public:
    int cube()
    {
        return pow(add(), 3);
    }
};
int main(){
    Cube obj;
    obj.getData(10,20);
    cout<<obj.add();
    cout<<endl<<obj.cube();   
    return 0;
}