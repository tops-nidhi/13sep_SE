#include<iostream>
using namespace std;
class A{
public: 
    A(){
        cout<<endl<<"This is parent class A.";
    }
};
class B{
public:
    B(){
        cout<<endl<<"This is parent class B.";
    }
};
class C{
public:
    C(){
        cout<<endl<< "This is parent class C.";
    }
};
class D : public A, public B, public C{
public:
    D(){
        cout<< endl<< "This is child class D.";
    }
};
int main(){
    D d1();
    return 0;
}