// 27. Remove Element from an array (LeetCode)
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, s = 0;
        while (i < nums.size()) {
            if (nums[i] != val) {
                nums[s] = nums[i];
                s++;
            }
            i++;
        }
        return s;
    }
};

int main() {
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    
    int val = 3;
    
    Solution solution;
    int Size = solution.removeElement(nums, val);
    
    cout << Size << endl;
    
    return 0;
}
