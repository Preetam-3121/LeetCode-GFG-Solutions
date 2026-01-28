#include<iostream>
suing namespace std;

bool isSafe(vector<vector<string>>& board,int row,int col,int n){
    //horizontal
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }

    //vertical
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    //left diagonal
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    
    //right doagonal
    for(int i=row,j=col;i>=0 && j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    
    return true;
}

void nQueeen(vector<vector<string>>& board,int row,int n,vector<vector<string>>& ans){
    if(row==n){
        ans.push_back({board});
        return;
    }
    
    for(int j=0;j<n;j++){
        if(isSafe(board,row,j,n)){
            board[row][j]='Q';
            nQueen(boars,row+1,n,ans);
            board[row][j]='.';
        }
    }


}

int main(){
    vector<string> board(4,string(4,'.'));
    vector<vector<string>> ans;

    nQueen(board,0,0,ans);
}