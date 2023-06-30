// 26. Remove Duplicates from Sorted Array (LeetCode)
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag = 0,n;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] == nums[i])
                flag++; 
                
            else
                nums[i - flag] = nums[i];
        }
        n=nums.size() - flag;
        return n;
    }
};

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    Solution solution;
    int newSize = solution.removeDuplicates(nums);
    cout << newSize << endl;
    
    return 0;
}
