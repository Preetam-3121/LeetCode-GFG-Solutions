#include<iostream>
#include<vector>
using namespace std;

bool is_sorted(vector<int> &arr,int m){
    int s=arr.size();
    if(m==(s-1))
    return true;

    if(arr[m]<=arr[m+1])
        return(is_sorted(arr,m+1));
    else
        return false;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int m=0;
    if(is_sorted(arr,m))
        cout<<"Sorted"<<endl;
    else
        cout<<"Not Sorted"<<endl;

    return 0;
}