#include<iostream>
using namespace std;
 int main(){
    cout<<"===== Simple Calculator ====="<<endl;
    int m=10,n=20;
    double op;
    char ch='y',p;

    while(ch!='n'){
        cout<<"Enter first number: ";cin>>m;
        cout<<"Enter operation (+, -, * ,/): ";cin>>p;
        cout<<"Enter second number: ";cin>>n;
        if(p=='+')
        op=m+n;

        else if(p=='-')
        op=m-n;
        
        else if(p=='*')
        op=m*n;
        
        else if(p=='/')
         op = (double)m / n;

        else {
        cout << "Invalid operation!" << endl;
        continue;
    }
        cout<<"\nResult: "<<m<<" "<<p<<" "<<n<<" = "<<op<<endl;
        cout<<"\nDo you want to calculate again? (y/n): ";cin>>ch;
    }
    cout<<"\nThank you for using the calculator!";
    return 0;
 }