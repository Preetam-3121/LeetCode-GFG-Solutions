#include<iostream>
using namespace std;

void max_min(int *arr,int n){
    int max=arr[0],min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=max)
        max=arr[i];
        if(arr[i]<=min)
        min=arr[i];
    }
    cout<<"Maximum value in the array : "<<max<<endl;
    cout<<"Minimum value in the array : "<<min<<endl;
    delete[] arr;
}

int main(){
    int n;
    cout <<"Enter the size of an array : ";cin>>n;
    int* arr=new int[n];
    cout <<"Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>*(arr+i);
    }
    cout<<"\n";
    max_min(arr,n);
    return 0;
}