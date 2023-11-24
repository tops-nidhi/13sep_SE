// WAP to get the data from the user and display
#include <iostream>
using namespace std;
int num;

void get()
{
    cout << "Enter the number: ";
    cin >> num;
}
void show(){
    cout<< endl<< "Value of number is " << num;
}
int main(){
    get();
    show();
    return 0;
}