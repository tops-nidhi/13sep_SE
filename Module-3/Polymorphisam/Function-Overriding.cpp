#include<iostream>
using namespace std;
class a{
public:
    int div(int a, int b)
    {
        return a/b;
    }
};
class b{
public: 
    int div(int a, int b){
        return a/b;
    }
};
int main()
{
    a A;
    b B;
    cout<< endl<< A.div(5,2);
    cout<< endl<< B.div(5, 3);
    return 0;
}