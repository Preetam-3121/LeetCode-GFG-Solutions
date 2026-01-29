#include <iostream>
#include <vector>
using namespace std;


bool searchMatrix(vector<vector<int>>& mat,int target){
    int m=mat.size(),n=mat[0].size();
    int r=0,c=n-1;
    while(r<m && c>=0)
    {
        if(mat[r][c] == target)
        return true;
        else if (mat[r][c]<target)
        {
            r++;
        }
        else
        {
            c--; 
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