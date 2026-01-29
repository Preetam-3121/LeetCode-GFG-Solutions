#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of an array : ";cin>>n;
    vector<int>* arr = new vector<int>(); // dynamically allocated vector

    // Input 5 elements
    cout<<"Enter the elements : "<<endl;
    for (int i = 0; i<n; i++) {
        int x;
        cin >> x;
        arr->push_back(x);
    }
    arr->pop_back();

    // Print size
    cout << "Size of array : " << arr->size() << endl;

    // Print elements
    for (int i = 0; i < arr->size(); i++) {
        cout << (*arr)[i] << " ";
    }

    insert arr; // Don't forget to free memory
    return 0;
}
