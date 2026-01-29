#include<iostream>
using namespace std;

bool isPrime(int n){
    int c=0;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==0 && n!=1)
    {
        return true;  
    }
    else{
        return false;
    }
    
}

int main(){
    int n;
    cout<<"Enter a number : ";cin>>n;
    bool m=isPrime(n);
    if(m==true)
    {
        cout<<"Prime number"; 
    }
    else{
        cout<<"not a prime number";
    }


}