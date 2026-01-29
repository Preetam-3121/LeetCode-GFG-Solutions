#include<iostream>
using namespace std;

void reverse(const string &st){

    string st1="";
    const char* p = st.c_str();
    for (int i = 0; i < st.length(); i++)
    {
        st1=*(p+i)+st1;
    }
    cout<<st1;
    
}

int main(){
    string st="Hello 2423";
    reverse(st);
    return 0;
}