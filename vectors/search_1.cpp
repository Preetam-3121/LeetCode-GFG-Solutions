#include <iostream>
#include <vector>
using namespace std;

bool searchRow(vector<vector<int>>& mat,int target,int mid)
{
     int m=mat.size(),n=mat[0].size();
    int str=0,enr=n-1,midr;
    while(str<=enr)
    {
        midr=(str+enr)/2;
        if(mat[mid][midr] == target)
        return true;
        else if (mat[mid][midr]<target)
        {
            str=midr+1;
        }
        else
        {
            enr=midr-1; 
        }
    }
    return false;
}


bool searchMatrix(vector<vector<int>>& mat,int target){
    int m=mat.size(),n=mat[0].size();
    int st=0,en=m-1,mid;
    while(st<=en)
    {
        mid=(st+en)/2;
        if(target<=mat[mid][n-1] && target>=mat[mid][0])
        {
            return(searchRow(mat,target,mid));
        }
        else if (target>mat[mid][n-1])
        {
            st=mid+1;
        }
        else if (target<mat[mid][0])
        {
            en=mid-1; 
        }
    }
    return false;

}

int main(){
     vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int key;
    cout<<"Enter the number to be searched : ";cin>>key;
    if(searchMatrix(arr,key))
    cout<<"Element present! ";
    else
    cout<<"Element not present! ";

    return 0;
}