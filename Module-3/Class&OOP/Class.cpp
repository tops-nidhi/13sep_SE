// WAP to make the simple calculator using class
#include <iostream>
using namespace std;
class Calculator
{
public: 
    int num1, num2;
    void get()
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    inline int add() { return num1 + num2; }
    int sub()
    {
        if (num1 > num2)
            return num1 - num2;
        else
            return num2 - num1;
    }
} ;
int main(){
    Calculator calc;
    calc.get();
    cout<< endl<< calc.add();
    cout<< endl<< calc.sub();
    return 0;
}