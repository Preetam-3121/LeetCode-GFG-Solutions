#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=20,b=30;
    cout<<"Value of a and b before swapping "<<a<<" and "<<b<<endl;
    swap(&a,&b);
    cout<<"Value of a and b after swapping "<<a<<" and "<<b<<endl;
    return 0;
} 