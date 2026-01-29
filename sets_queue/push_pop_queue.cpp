/*Push 10, 20, 30.

Pop once.

Display front() and size().*/

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> s;
    // 5, 1, 2, 5, 1
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout<<"Size : "<<s.size()<<endl;
    int s1=s.size();
    while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
    }

   

    return 0;
}