#include<iostream>
using namespace std;

int change(int &m){
    m=540;
    return m;
}


int main(){
    int a = 20;
    int *p = &a;

    cout << "Original value of a: " << a << endl;
    change(*p);
    cout << "New value of a after using *p: " << a << endl;

    return 0;
}
