#include<iostream>
using namespace std;

void freq(string st){
    for (int i = (int)'A'; i <= (int)'z' ; i++)
    {
       
        int c=0;
        for (char ch : st) 
        {
            if (ch!=' ')
            {
                if((char)i==ch )
                c++;
            }
            
        }
        if(c!=0)
            cout<<(char)i<<" - "<<c<<endl;
        
    }
    
    
    
}


int main(){
    string st="Preetam Kumar Rajak";
    freq(st);
    return 0;
}