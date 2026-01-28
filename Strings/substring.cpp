#include<iostream>
using namespace std;

void freq(string st){
    string st1;
    for (char ch : st)
    {
        
        if(ch!=' ')
        st1=st1+ch;
        else
        {
            cout<<st1<<endl;
            st1="";
        }
    }
    
}


int main(){
    string st="Preetam Kumar Rajak";
    st=st+" ";
    freq(st);
    return 0;
}