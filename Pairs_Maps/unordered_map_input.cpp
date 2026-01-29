#include<iostream>
#include<unordered_map>
using namespace std;
 int main(){
    unordered_map<string,int> arr;
    char ch='y';
    while(ch=='Y' || ch=='y')
    {
        string nam;int age;
        cout<<"Enter Name : ";getline(cin,nam);
        cout<<"Enter age : ";cin>>age;
        arr[nam]=age;
        cout<<"Want to enter more data ?(y/n) ";cin>>ch;
        cin.ignore();
    }

    if(arr.count("John"))
    cout<<"\"John\" exists with age : "<<arr["John"]<<endl;
    else
    cout<<"\"John\" not found in map.\n";

    cout<<"\nAll Entries:\n";
    for(auto p : arr)
    cout<<p.first<<" "<<p.second<<endl;

    arr.clear();
    return 0;

 }