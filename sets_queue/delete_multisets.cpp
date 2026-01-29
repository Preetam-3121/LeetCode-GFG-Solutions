#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> s;
    // 5, 1, 2, 5, 1
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    
    for(auto i : s)
    cout<<i<<" ";

    if(s.find(1)!=s.end()){
        //s.erase(1);
        s.erase(s.find(1));
        cout << "\n1 erased\n";
    }

    
    for(auto i : s)
    cout<<i<<" ";

    return 0;
}