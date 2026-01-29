#include<iostream>
using namespace std;

void search(int arr[][3],int r,int c,int key){
    int m=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j]==key)
            {
                cout<<"Number present - ["<<i<<","<<j<<"]";
                m=1;
                break;
            }
        }
    }
    if(m==0)
    cout<<"Number not present ";
    
}

int main(){

    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int key,c=3,r=4;
    cout<<"Enter the number to be searched : ";cin>>key;
    search(arr,r,c,key);
    
}