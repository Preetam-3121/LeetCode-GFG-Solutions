//✅ Time Complexity: O(log n)
//✅ Space Complexity: O(log n) due to recursive call stack

#include<iostream>
using namespace std;

int search(int *arr,int key,int fs,int ls){
    int mid=(fs+ls)/2;
    if (fs>ls)
        return 0;
   
    if(arr[mid]==key)
        return 1;
    else if (arr[mid]>key)
        return(search(arr,key,fs,mid-1));
    else
        return(search(arr,key,mid+1,ls));

}

int main(){
    int n,key;
    cout<<"Enter the size of an array : "<<endl;cin>>n;
    int fs=0,ls=n-1;
    int* arr=new int[n];
    cout<<"Enter the elements of an array : "<<endl;
    
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    cout<<"Enter the element to be searched : ";cin>>key;

    if(search(arr,key,fs,ls))
    cout<<"Element is present."<<endl;
    else
    cout<<"Element is not present."<<endl;
    
    return 0;
}