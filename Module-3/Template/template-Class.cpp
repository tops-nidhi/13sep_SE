#include<iostream>
using namespace std;
template <typename T>
class temp
{
public:
    T div(T a, T b)
    {
        return a/b;
    }
};
int main()
{
    temp <int> t1;
    cout<< endl<< t1.div(5, 3);
    temp <float> t2;
    cout<< endl<< t2.div(5, 3);
}