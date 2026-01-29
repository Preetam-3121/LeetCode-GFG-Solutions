#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string st;
    cout<<"Enter a string : ";getline(cin,st);
    unordered_map<char,int> arr;
    for (auto ch : st)
        if(ch!=' ')
            arr[ch]++;

    cout<<"\nFrequency of Characters :\n";
    for (auto i : arr)
        cout<<i.first<<" - "<<i.second<<endl;

    arr.clear();
    return 0;
}