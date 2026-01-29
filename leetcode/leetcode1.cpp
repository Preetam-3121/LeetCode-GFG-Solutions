#include<iostream>
using namespace std;

/*string mergeAlternately(string word1, string word2){

    int i=0,j=0;string st="";
    while(i<word1.length() || j<word2.length()){
        if(word1.length()<word2.length() && j<word1.length())
            st=st+word1[j++];

        else if(word1.length()>word2.length() && i<word2.length())
            st=st+word2[i++];

        else if((i+j)%2==0 && i<word1.length())
            st=st+word1[i++];
   
        else if(j<word2.length())
            st=st+word2[j++];
    }
    return st;
  
}*/

string mergeAlternately(string word1, string word2){

    int i=0,j=0;string st="";
    while(i<word1.length() || j<word2.length()){
        if(i<word1.length())
        st+=word1[i++];
        
        if(j<word2.length())
        st+=word2[j++];
        
    }
    return st;
  
}

int main(){
    string wd1="ab", wd2="pqrs";
    cout<<mergeAlternately(wd1,wd2);
    return 0;
}