/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
#include <vector>
#include <algorithm>

using std::sort;
using std::vector;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, long long target)
    {
        int n = nums.size();
        vector<vector<int>> res;
        if (n < 4)
            return {};

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; ++i)
        {
            if ((long)nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
                return res;
            if ((long)nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target)
                continue;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n - 2; ++j)
            {
                if ((long)nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target)
                    break;
                if ((long)nums[i] + nums[j] + nums[n - 1] + nums[n - 2] < target)
                    continue;
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int left = j + 1;
                int right = n - 1;
                while (left < right)
                {
                    long sum = (long)nums[i] + nums[j] + nums[left] + nums[right] - target;
                    if (sum == 0)
                    {
                        while (left + 1 < right && nums[left] == nums[left + 1])
                            ++left;
                        while (right - 1 > left && nums[right] == nums[right - 1])
                            --right;
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        ++left;
                        --right;
                    }
                    else if (sum > 0)
                        --right;
                    else
                        ++left;
                }
            }
        }

        return res;
    }
};
// @lc code=end
