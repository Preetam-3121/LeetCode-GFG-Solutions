#include<iostream>
using namespace std;

void name();
void name (){
    string nam="";
    cout<<"Enter your name : ";
    getline(cin,nam);
    for (int i = 1; i<=5; i++)
    {
        cout<<nam<<endl;
    }
}

int main()
{
    name();
    return 0;
}