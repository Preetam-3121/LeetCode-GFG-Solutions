#include<iostream>
using namespace std;

void display(int **arr,int m,int n){
    cout<<"2D Array : "<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(*(arr + i) + j) << " ";  // Pointer-style access
        }
        cout << endl;
    }
}

int main(){
    int m,n;
    cout <<"Enter the size of row of an array  : ";cin>>m;
    cout <<"Enter the size of column of an array  : ";cin>>n;
    // Step 1: Create array of pointer
    int** arr = new int*[m];

    // Step 2: Allocate memory for each row
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    cout <<"Enter array elements : ";
    for (int i = 0; i < m; i++)
    {
        cout<<"Elements in row "<<i<<" : "<<endl;
        for (int j = 0; j < n; j++)
        {
            cin>>*(*(arr+i)+j);
        }
        cout<<"\n";
    }
    display(arr,m,n);

     // Free memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}