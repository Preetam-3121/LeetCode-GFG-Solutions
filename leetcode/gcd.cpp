/*Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""*/
#include<iostream>
using namespace std;

/*int gcd(int a,int b){
    if(b==0)
        return a;
    
    return gcd(b,a%b);
}*/

string gcdOfStrings(string str1, string str2) {
    
    if(str1+str2!=str2+str1)
    return "";
    int a=str1.length(),b=str2.length();
    
    while(b!=0){
        int t=a;
        a=b;
        b=t%b;
    }

    return(str1.substr(0,a));
}

int main(){
    string str1="ABABAB", str2="ABAB";
    cout<<gcdOfStrings(str1,str2);
    return 0;
}