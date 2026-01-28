#include<iostream>
#include<vector>
using namespace std;

void GenerateSubsetsWithRepetition(vector<int>& nums, vector<int>& current, vector<vector<int>>& result, int index) {
    if (current.size() > nums.size()) 
    return;

    result.push_back(current);
    for (int i = index; i < nums.size(); i++) {
        if (i > index && nums[i] == nums[i - 1])
                continue;
        current.push_back(nums[i]);
        // Use i (not i + 1) to allow the same element again
        GenerateSubsetsWithRepetition(nums, current, result, i);
        current.pop_back();
    }
}

vector<vector<int>> subsetsWithRepetition(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    GenerateSubsetsWithRepetition(nums, current, result, 0);
    return result;
}

int main() {
    vector<int> arr = {2, 3, 5,5};

    vector<vector<int>> allSubsets = subsetsWithRepetition(arr);

    for (auto subset : allSubsets) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
