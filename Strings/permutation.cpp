#include <iostream>
#include <string>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]) {
    for (int i = 0; i < 128; i++) {
        if (freq1[i] != freq2[i])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int freq[128] = {0};

    for (int i =0;i<s1.length();i++) {
        freq[s1[i]]++;
    }

    int windSize = s1.length();

    for (int i = 0; i <= s2.length() - windSize; i++) {
        int windFreq[128] = {0};
        for (int j = 0; j < windSize; j++) {
            windFreq[s2[i + j]]++;
        }

        if (isFreqSame(freq, windFreq))
            return true;
    }

    return false;
}

int main() {
    string s1 = "Ab12";
    string s2 = "adcb12Ab12df12";

    if (checkInclusion(s1, s2))
        cout << "Permutation exists ✅" << endl;
    else
        cout << "Permutation doesn't exist ❌" << endl;

    return 0;
}
