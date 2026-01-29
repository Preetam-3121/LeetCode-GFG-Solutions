/*#include <iostream>
#include <vector>
using namespace std;


void spiral(vector<vector<int>> &arr){
    int r=0,d=0,m=arr.size(),n=arr[0].size();

    while (d <= m - 1 && r <= n - 1)
    {
        //right
        for(int i=r;i<n;i++)
        cout<<arr[r][i]<<" ";

        //down
        for(int j=d+1;j<m;j++)
        cout<<arr[j][n-1]<<" ";

        //left
        for(int k=n-2;k>=r;k--)
        cout<<arr[m-1][k]<<" ";

        //up
        for(int l=m-2;l>d;l--)
        cout<<arr[l][d]<<" ";

        r++;n--;d++;m--;

    }


}*/

#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>> &arr) {
    int r = 0, d = 0;
    int m = arr.size();       // total rows
    int n = arr[0].size();    // total cols

    while (r < m && d < n) {
        // ➤ Go Right
        for (int i = d; i < n; i++)
            cout << arr[r][i] << " ";
        r++;  // top row done

        // ➤ Go Down
        for (int j = r; j < m; j++)
            cout << arr[j][n - 1] << " ";
        n--;  // right column done

        // ➤ Go Left
        if (r < m) {
            for (int i = n - 1; i >= d; i--)
                cout << arr[m - 1][i] << " ";
            m--;  // bottom row done
        }

        // ➤ Go Up
        if (d < n) {
            for (int i = m - 1; i >= r; i--)
                cout << arr[i][d] << " ";
            d++;  // left column done
        }
    }
}



int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    vector<vector<int>> arr1 = {
    {1,  2,  3,  4,  5},
    {6,  7,  8,  9, 10},
    {11,12, 13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25}
};

vector<vector<int>> arr2 = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9,10,11,12}
};

    spiral(arr2);

    return 0;
}