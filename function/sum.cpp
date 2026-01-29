#include<iostream>
using namespace std;
int add(int a,int b){
    int c; 
    c=a+b;
    return c;
}
int main(){
    int a,b;
    cout<<"enter a number :";cin>>a;
    cout<<"enter a number :";cin>>b;
    cout<<add(a,b);
}