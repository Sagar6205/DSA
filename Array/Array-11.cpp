// 169. Majority Element (Leet Code)
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        }
    
};