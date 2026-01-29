#include <iostream>
using namespace std;

void insertionSort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    insert[] arr;
    return 0;
}


/*#include <iostream>
using namespace std;

void insertion(int* arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        int min=i,key=0;
        for (int j = i+1; j <n; j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
                key=arr[min];
                
            }

        }
        if(key!=0){
            for (int k = min; k>i; k--)
            {
                arr[k]=arr[k-1];
            }
            arr[i]=key;    
        }
        
    }
    
}

int main(){
     int n;
    cout<<"Enter the size of an array : "<<endl;cin>>n;
    int* arr=new int[n];
    cout<<"Enter the elements of an array : "<<endl;
    
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    insertion(arr,n);
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";

    return 0;
}*/