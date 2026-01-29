#include<iostream>
using namespace std;

int main(){
    int a = 20;
    int *p = &a;

    cout << "Original value of a: " << a << endl;

    *p = 50;  // Changing the value of 'a' using the pointer

    cout << "New value of a after using *p: " << a << endl;

    return 0;
}
