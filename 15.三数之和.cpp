/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using std::pair;
using std::set;
using std::sort;
using std::unordered_map;
using std::vector;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        if (nums.size() < 3)
            return {};

        vector<vector<int>> res;
        int n = nums.size();

        sort(nums.begin(), nums.end());
        if (nums[n - 1] < 0)
            return {};
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > 0)
                return res;
            if (i > 0)
                if (nums[i] == nums[i - 1])
                    continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    while (left + 1 < right && nums[left] == nums[left + 1])
                        ++left;
                    while (right - 1 > left && nums[right] == nums[right - 1])
                        --right;
                    res.push_back({nums[i], nums[left], nums[right]});
                    ++left;
                    --right;
                }
                else if (sum > 0)
                {
                    --right;
                }
                else
                {
                    ++left;
                }
            }
        }
        return res;
    }
};
// @lc code=end
