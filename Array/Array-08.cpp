// 88. Merge Sorted Array (LeetCode)

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, const vector<int>& nums2, int n) {
        int p = m - 1;
        int q = n - 1;
        int l = (m + n) - 1;

        while (p >= 0 || q >= 0) {
            if (p >= 0 && (q < 0 || nums1[p] >= nums2[q])) {
                nums1[l] = nums1[p];
                p--;
            } else {
                nums1[l] = nums2[q];
                q--;
            }
            l--;
        }
    }
};

int main() {
    vector<int> nums1(6); 
    nums1[0] = 1;
    nums1[1] = 2;
    nums1[2] = 3;
    vector<int> nums2;
    nums2.resize(3);
    nums2[0] = 2;
    nums2[1] = 5;
    nums2[2] = 6;
    int m = 3;
    int n = 3;

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
