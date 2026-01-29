#include<iostream>
using namespace std;

void transpose(int arr[][4],int r,int c){
    int m=0,n=0;
    int arr2[c][r];
    if(r>=c)
    {
        for (int i = 0; i <r ; i++)
        {
            int sc=0;
            for (int k = 0; k < c ; k++)
            {
                arr2[k][i]=arr[i][k];
            }
        }
    }
    else
    {
        for (int i = 0; i <r ; i++)
        {
            int sc=0;
            for (int k = 0; k < c ; k++)
            {
                arr2[k][i]=arr[i][k];
            }
        }
    }
    cout<<"\nTranspose Matrix \n"<<endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
        
    }

    
}

int main(){

    int arr[3][4]={{1,2,3,10},{4,5,6,11},{7,8,9,12}};
    int c=4,r=3;
    cout<<"Matrix \n"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    transpose(arr,r,c);
    
}