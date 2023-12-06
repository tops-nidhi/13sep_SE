#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "This is Constructor A.";
    }
};
class B: virtual public A
{
public:
    B(){
        cout<<"\nThis is Constructor B.";
    }
};
class C : virtual public A
{
public :
    C(){
        cout<<"\nThis is constructor C.";
    }
};
class D : public B, public C
{
public:
    D(){
        cout<<"\nThis is constructor D.";
    }
};
int main(){
    D d1;
    return 0;
}