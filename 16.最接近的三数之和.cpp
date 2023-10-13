/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
#include <vector>
#include <algorithm>

using std::sort;
using std::vector;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        /*
            1. 排序
            2. 遍历：
                2.1. 令left = i + 1, right = n - 1;
                2.2. 当 left < right，循环：
                    2.2.1. 求三数之和与target之差的s，如果s < cur_min, cur_min = s;
                    2.2.2. 否则当
                    2.2.3.
        */
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int cur_close = 40000;

        for (int i = 0; i < n - 2; ++i)
        {
            int left = i + 1;
            int right = n - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                int interval = sum - target;
                if (interval == 0)
                    return sum;

                cur_close = abs(interval) < abs(cur_close - target) ? sum : cur_close;

                if (interval > 0)
                    --right;
                else
                    ++left;
            }
        }
        return cur_close;
    }
};
// @lc code=end
