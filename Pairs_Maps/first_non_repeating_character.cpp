#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s = "aabbcddbe";
    unordered_map<char, int> freq;

    for(char c : s){
        freq[c]++;
    }

    for(char c : s){
        if(freq[c] == 1){
            cout <<"First non-repeating character: " << c << endl;
            break;
        }
    }

    return 0;
}
