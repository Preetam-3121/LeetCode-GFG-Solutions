#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,string>> arr;
    int roll;string nam;
    char s='y';
    while (s=='Y' || s=='y')
    {
        cout<<"Enter Roll_no. : ";cin>>roll;
        cin.ignore();
        cout<<"Enter Name : ";
        getline(cin,nam);
        arr.push_back({roll,nam});

        cout<<"Want to enter more data ?(y/n) ";cin>>s;
    }

    for (auto ch : arr)
    {
       cout<<ch.first<<" "<<ch.second<<endl;
    }
    
    arr.clear();
    return 0;
    
}