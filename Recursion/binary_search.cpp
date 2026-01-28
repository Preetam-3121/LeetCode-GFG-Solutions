#include<iostream>
#include<vector>
using namespace std;

bool binary_search(vector<int> &arr,int n,int st,int en){

    if(st>en)
        return false;

    int mid=(st+en)/2;
    if(arr[mid]==n)
        return true;
    else if (arr[mid]>n)
        return(binary_search(arr,n,st,mid-1));
    else
        return(binary_search(arr,n,mid+1,en));

}

int main(){
    vector<int> arr={1,2,3,4,5};
    int st=0,en=arr.size()-1,n;
    cout<<"Enter the number to be searched : ";cin>>n;
    if(binary_search(arr,n,st,en))
        cout<<"Element is present."<<endl;
    else
        cout<<"Element is not present."<<endl;

    return 0;
}