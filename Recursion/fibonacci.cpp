#include<iostream>
using namespace std;

int fab(int n){
    
    if (n<=1){
        return n;
    }
    return(fab(n-1)+fab(n-2));
}

int main(){
    int n;
    cout<<"Enter nth term : ";cin>>n;
    
    cout<<"fibonacci series :";
    for (int i = 0; i < n; i++)
    {
        cout<<fab(i)<<" ";
    }
    return 0;
}