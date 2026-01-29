#include<iostream>
#include<string>
using namespace std;

void vowels(const string &st){

    string st1="aeiou";
    const char *p=st.c_str();
    int c=0;
    for (char ch : st1)
    {
        
        for (int i=0 ;i<st.length();i++)
        {
            if(ch==*(p+i))
            c++;
        }
        
    }
    cout<<"Total number of vowels present in the string :"<<c;
    
}

int main(){
    string st="Preetam";
    for(int i=0;i<st.length();i++)
		st[i]=tolower(st[i]);
    vowels(st);
    return 0;
}