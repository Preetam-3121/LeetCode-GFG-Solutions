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
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[i],arr[min]);       
        // Print array after each pass
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) 
        cout << arr[k] << " ";
        cout << endl;
    }

    return 0;
}