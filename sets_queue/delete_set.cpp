#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    //5, 1, 2, 5, 1
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    
    for(auto i : s)
    cout<<i<<" ";
    cout<<"\n";

    if(s.find(2)!=s.end())
    s.erase(2);
    
    for(auto i : s)
    cout<<i<<" ";

    return 0;
}