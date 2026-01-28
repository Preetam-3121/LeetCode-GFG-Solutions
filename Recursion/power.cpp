/*#include<iostream>
using namespace std;

int n;
int power(int n1){
    
    if (n1<1){
        return 1;
    }
    return (n*power(n1-1));
}

int main(){
    int n1;
    cout<<"Enter a number : ";cin>>n;
    cout<<"Enter power : ";cin>>n1;
    cout<<n<<" raised to the power "<<n1<<" is ";
    cout<<power(n1);
    return 0;
}*/

#include<iostream>
using namespace std;


int power(int n,int n1){
    
    if (n1<1){
        return 1;
    }
    return (n*power(n,n1-1));
}

int main(){
    int n1,n;
    cout<<"Enter a number : ";cin>>n;
    cout<<"Enter power : ";cin>>n1;
    cout<<n<<" raised to the power "<<n1<<" is ";
    cout<<power(n,n1);
    return 0;
}