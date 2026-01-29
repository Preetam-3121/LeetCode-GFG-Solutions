//✅ Time Complexity: O(n)
//✅ Space Complexity: O(n)

#include<iostream>
using namespace std;

int main(){
    int n,key;
    cout<<"Enter the size of an array : "<<endl;cin>>n;
    int* arr=new int[n];
    cout<<"Enter the elements of an array : "<<endl;
    
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    cout<<"Enter the element to be searched : ";cin>>key;

    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<"Element is present."<<endl;
            exit(0);
        }
    }
    cout<<"Element is not present."<<endl;
    return 0;
}