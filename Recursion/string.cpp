#include <iostream>
using namespace std;

void reverse(string s, int i = 0) {
    if (i == s.length()) return;  // base case
    reverse(s, i + 1);            // recursive call
    cout << s[i];                 // print during backtracking
}

int main() {
    string name;
    cout << "Enter a string: ";
    getline(cin, name);          // input full string including spaces
    cout << "Reversed string: ";
    reverse(name);               // call recursive function
    return 0;
}
