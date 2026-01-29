#include<iostream>
#include<vector>
using namespace std;

bool print_subsets(vector<int> &arr, vector<int> &ans, int i, int sum) {
    int s = 0;
    for (int k = 0; k < ans.size(); k++) 
        s += ans[k];

    if (s == sum)
        return true;

    for (int j = i; j < arr.size(); j++) {
        ans.push_back(arr[j]);
        if (print_subsets(arr, ans, j + 1, sum))
            return true;
        ans.pop_back();
    }
    return false;
}

bool isSubsetSum(vector<int>& arr, int sum) {
    vector<int> ans;
    return print_subsets(arr, ans, 0, sum);
}

int main() {
    vector<int> arr = {1, 2, 3};
    int sum = 6;
    if (isSubsetSum(arr, sum))
        cout << "Subset exists" << endl;
    else
        cout << "No such subset" << endl;
    return 0;
}


/*#include<iostream>
#include<vector>
using namespace std;

bool print_subsets(vector<int> &arr, int i, int curr_sum, int target_sum) {
    if (curr_sum == target_sum)
        return true;

    if (i >= arr.size() || curr_sum > target_sum)  // Optional optimization: stop early
        return false;

    // Include current element
    if (print_subsets(arr, i + 1, curr_sum + arr[i], target_sum))
        return true;

    // Exclude current element
    if (print_subsets(arr, i + 1, curr_sum, target_sum))
        return true;

    return false;
}

bool isSubsetSum(vector<int>& arr, int sum) {
    return print_subsets(arr, 0, 0, sum);
}


int main() {
    vector<int> arr = {1, 2, 3};
    int sum = 6;
    if (isSubsetSum(arr, sum))
        cout << "Subset exists" << endl;
    else
        cout << "No such subset" << endl;
    return 0;
}
*/
