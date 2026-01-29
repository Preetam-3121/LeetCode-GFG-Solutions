/*Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
    vector<bool> vec;
    int maxCandies=*max_element(candies.begin(),candies.end());
    for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= maxCandies)
                vec.push_back(true);
            else
                vec.push_back(false);
    }
    return (vec);
}

int main(){
    vector<int> candies={2,3,5,1,3};
    vector<bool> result;
    for(auto i : kidsWithCandies(candies,3))
    {
        cout<<i;
    }

    return 0;
}