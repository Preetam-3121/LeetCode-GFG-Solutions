//✅ Time Complexity: O(n²)
//✅ Space Complexity: O(n) 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array : "<<endl;cin>>n;
    int* arr=new int[n];
    cout<<"Enter the elements of an array : "<<endl;
    
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    for (int i = 0; i<(n-1); i++)
    {
        int c=0;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);       
                c=1;
            }
        }
        // Print array after each pass
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) 
        cout << arr[k] << " ";
        cout << endl;
        if (c==0)
        break;
        
    }

    return 0;
}