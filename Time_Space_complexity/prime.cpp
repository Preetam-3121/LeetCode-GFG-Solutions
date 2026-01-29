#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";cin>>n;
    for (int i=2;(i*i)<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not a Prime number"<<endl;
            exit(0);
        }
    }
    cout<<"Prime Number"<<endl;
    return 0;
    
}