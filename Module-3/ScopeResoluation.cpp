// WAP to print the value using scope resolution variable
#include<iostream>
using namespace std;
int no = 100;
int main()
{
    int no = 63;
    cout<<"Value of the local variable no is: "<< no;
    cout<<"\nValue of the global variable no is: "<< ::no;
    return 0;
}