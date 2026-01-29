#include<iostream>
#include<string>
using namespace std;

void alt(const string &st){

    const char *p=st.c_str();
    for (int i=0 ;i<st.length();i+=2)
    {
        
        cout<<*(p+i);
        
    }
    
}

int main(){
    string st="Preetam";
    //char st[]="Preetam";
    //*p=st;
    alt(st);
    return 0;
}