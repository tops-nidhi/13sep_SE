#include<iostream>
using namespace std;
class Demo{
private:
    int no;
public:
    friend int data(Demo &obj);
};
int data(Demo &obj){
    obj.no = 90;
    cout<<"Value of no is: "<< obj.no;
    return 0;
}
int main(){
    Demo d1;
    data(d1);
    return 0;
}