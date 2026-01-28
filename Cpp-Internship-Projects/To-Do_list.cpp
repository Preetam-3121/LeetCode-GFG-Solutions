#include<iostream>
#include<vector>
using namespace std;

 int main(){
    cout<<"===== To-Do List App =====\n\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit"<<endl;
    int m=0,n,ch=0;
    string st;
    vector<pair<int,string>> arr;

    while(ch!=4){
        cout<<"\nEnter your choice: ";cin>>ch;
        cin.ignore();

        if(ch==1){
            cout<<"\nEnter task description: ";getline(cin,st);
            m++;
            arr.push_back({m,st});
            cout<<"\nTask added successfully!"<<endl;
        }
        
        else if(ch==2){

            if(arr.empty()){
                cout<<"\nNo task available!"<<endl;
                continue;
            }

            cout<<"\nYour Tasks: "<<endl;
            for(auto i : arr)
                cout<<i.first<<". "<<i.second<<endl;
        }

        else if(ch==3){
            
            if(arr.empty()){
                cout<<"\nNo task available!"<<endl;
                continue;
            }

            cout<<"\nYour Tasks: "<<endl;
            for(auto i : arr)
                cout<<i.first<<". "<<i.second<<endl;

            cout<<"\nEnter the task number to be deleted: ";cin>>n;

            if(n < 1 || n > arr.size()){
                cout << "Invalid task number!" << endl;
                continue;
            }

            arr.erase(arr.begin() + n-1);
            m--;
            for(int i=1;i<=m;i++)
                arr[i-1].first=i;
            
            cout<<"Task deleted successfully!"<<endl;
        }

        else if(ch>4 || ch<1){
            cout << "Invalid operation!" << endl;
            continue;
        }
    }
    cout<<"\nThank you for using the To-Do List App!";
    return 0;
 }