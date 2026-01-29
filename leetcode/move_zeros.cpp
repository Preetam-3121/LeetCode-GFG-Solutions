#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            int temp=nums[i];
            cout<<temp<<endl;
            cout<<"print"<<endl;
            for(int j=i;j<nums.size()-1;j++){
                nums[j]=nums[j+1];
                cout<<nums[j]<<endl;}
                cout<<"\n";
            nums[nums.size()-1]=temp;
        }
        
    }
}

void moveZeroes(vector<int>& nums) {
    int nonZeroPos = 0;
    // Move non-zero elements forward
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
           nums[nonZeroPos++] = nums[i];
       }
    }
       // Fill the rest with zeros
    while (nonZeroPos < nums.size()) {
        nums[nonZeroPos++] = 0;
    }
}

int main(){
    vector<int> nums={0,0,1};
    moveZeroes(nums);
    for(int i : nums)
    cout<<i<<" ";
}