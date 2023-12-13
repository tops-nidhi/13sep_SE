#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    string str;
    ofstream out("hello.txt");
    out << "Hello";
    out.close();
    ifstream in;
    in.open("hello.txt");
    in >> str;
    cout<< str;
    in.close();
    return 0;
}