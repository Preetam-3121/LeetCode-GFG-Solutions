#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>* arr = new vector<int>(); // dynamically allocated vector

    // Input 5 elements
    
    cout<<"Enter 5 elements : "<<endl;
    for (int i = 0; i<5; i++) {
        int x;
        cin >> x;
        arr->push_back(x);
    }

    // Print size
    cout << "Size of array : " << arr->size() << endl;

    // Print elements
    for (int i = 0; i < arr->size(); i++) {
        cout << (*arr)[i] << " ";
    }

    insert arr; // Don't forget to free memory
    return 0;
}
