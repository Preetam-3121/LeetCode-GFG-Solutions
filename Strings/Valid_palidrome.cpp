#include<iostream>
#include<string>
using namespace std;

bool isPalin(string s){
    string st="";
    for(char ch : s)
    {
        st=ch+st;
    }

    if(s==st)
    return true;
    else
    return false;
}

int main(){
    string s="madam";
    bool m=isPalin(s);
    if(m==true)
    cout<<"Palindrome string.";
    else
    cout<<"Not a Palindrome string";


}