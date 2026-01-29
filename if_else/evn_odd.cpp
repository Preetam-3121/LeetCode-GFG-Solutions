#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<"Enter a number : ";
    cin>>n;
    if (n%2==0)
    {
        cout<<"Even Number"<<endl;
    }
    else if (n%2!=0)
    {
        cout<<"Odd Number"<<endl;
    }
}