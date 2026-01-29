/*You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

Example 1:

Input: flowerbed = [1,0,,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
 

Constraints:

1 <= flowerbed.length <= 2 * 104
flowerbed[i] is 0 or 1.
There are no two adjacent flowers in flowerbed.
0 <= n <= flowerbed.length*/

#include<iostream>
#include<vector>
using namespace std;

#include<iostream>
#include<vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int c = 0;  // count of flowers planted

    for (int i = 0; i < flowerbed.size();) {
        if (flowerbed[i] == 0) {
            bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
            bool rightEmpty = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);

            if (leftEmpty && rightEmpty) {
                flowerbed[i] = 1;  // plant flower
                c++;
                if (c >= n)
                    return true;
                i += 2;  // skip next plot after planting
                continue;
            }
        }
        i++;  // move to next plot if no flower planted
    }

    return c >= n;
}

int main() {
    vector<int> flowerbed = {1, 0};
    if (canPlaceFlowers(flowerbed, 1))
        cout << "true";
    else
        cout << "false";

    return 0;
}