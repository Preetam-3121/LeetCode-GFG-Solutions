#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter numbe of rows : ";cin>>m;
    cout<<"\nEnter numbe of columns : ";cin>>n;
    vector<int>** arr=new vector<int>*[m];

    for (int i=0; i<m; i++)
    {
        arr[i]=new vector<int>();
    }
    

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            arr[i]->push_back(x);
        }    
        
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout<<(*arr[i])[j]<<" ";
        
        cout<<endl;
    }

    insert arr;
    return 0;
}

/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    // Create 2D vector
    vector<vector<int>> arr(m, vector<int>(n));

    // Input elements
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    // Output elements
    cout << "Matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
*/