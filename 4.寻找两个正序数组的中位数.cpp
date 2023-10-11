/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums3;
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());

        if (nums3.size() % 2 == 0)
        {
            return double(nums3[nums3.size() / 2] + nums3[nums3.size() / 2 - 1]) / 2;
        }
        else
        {
            return double(nums3[nums3.size() / 2]);
        }
    }
};
// @lc code=end
