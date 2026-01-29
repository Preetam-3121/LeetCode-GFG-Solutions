/*#include<bits/stdc++.h>
using namespace std;

void display(int arr[][]){
     

}


int main(){
    int arr1[5][5] = {
    {1,  2,  3,  4,  5},
    {6,  7,  8,  9, 10},
    {11,12, 13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25}};

    display(arr1);
    
    return 0;
}

    */
#include<iostream>
using namespace std;

// Fix the column size (e.g., 5)
void display(int (*arr)[5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << *(*(arr + i) + j) << " ";  // Pointer-style access
        }
        cout << endl;
    }
}

int main(){
    int arr1[5][5] = {
        {1,  2,  3,  4,  5},
        {6,  7,  8,  9, 10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    display(arr1);

    return 0;
}
