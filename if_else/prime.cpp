#include<iostream>
using namespace std;
int main(){
     int n=0,m=0;
    cout<<"Enter a number : ";
    cin>>n;
    for (int i = 2; i <n; i++)
    {
        if(n%i==0)
        {
            m=1;
            break;
        }
    }
    
    if(m==0 && n!=1)
    {
        cout<<"Prime number.";
    }
    else
    {
        cout<<"Not a prime number.";
    }
}