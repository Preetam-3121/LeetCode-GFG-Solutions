//Time complexity : O((2^n)*n)

#include<iostream>
#include<vector>
using namespace std;


void GenerateSubsets(vector<int>& nums,vector<int>& current,vector<vector<int>>& result,int index){
        result.push_back(current);
        for(int i=index;i<nums.size();i++){
            current.push_back(nums[i]);
            GenerateSubsets(nums,current,result,i+1);
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        GenerateSubsets(nums,current,result,0);
        return result;
    }

int main(){
    vector<int> arr={2,3,6,7};
    vector<int> ans;//store subsets
    vector<vector<int>> allSubsets=subsets(arr);

    for (auto subset : allSubsets) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}

/*bool print_subsets(vector<int> &arr,vector<int> &ans,int i,int sum){
    int s=0;
    for (int k = 0; k < ans.size(); k++) {
        s=s+ans[k];
    }
    if (s == sum) {
        cout << "Subset found: ";
        for (int val : ans) {
            cout << val << " ";
        }
        cout << endl;
        return true;
    }

    for(int j=i;j<arr.size();j++){
        ans.push_back(arr[j]);
        
        if (print_subsets(arr, ans, j + 1, sum)) {
            return true;  // If found, stop further recursion
        }
        
        ans.pop_back();
    }
    return false;


}

int main(){
    vector<int> arr={1,2,3};
    vector<int> ans;//store subsets
    if(print_subsets(arr,ans,0,9))
    cout<<"true";
    else
    cout<<"false";

    return 0;
}*/