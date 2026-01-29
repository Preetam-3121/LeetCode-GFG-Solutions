#include<iostream>
using namespace std;

void sum(int arr[][3],int r,int c){
    for (int i = 0; i < r; i++)
    {
        int sr=0;
        for (int j = 0; j < c; j++)
        {
            sr=sr+arr[i][j];
        }
        cout<<"sum of row    "<<i+1<<" - "<<sr<<endl;
    }

    for (int i = 0; i < c; i++)
    {
        int sc=0;
        for (int k = 0; k < r; k++)
        {
            sc=sc+arr[k][i];
        }
        cout<<"sum of column "<<i+1<<" - "<<sc<<endl;
    }
    
    
}

int main(){

    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int key,c=3,r=4;
    sum(arr,r,c);
    
}