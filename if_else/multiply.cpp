#include<iostream>
using namespace std;
int main() {
    int n=0;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"table of "<<n<<" is :"<<endl;
    for (int i = 1; i<=10; i++)
    {
        cout<<(n*i)<<endl;

    }

}