/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
#include <vector>
#include <algorithm>
#include <iterator>
using std::iter_swap;
using std::sort;
using std::vector;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        auto p = nums.end() - 1;
        auto right = p;
        while (p != nums.begin())
        {
            right = p;
            while (right > nums.begin() && *(p) <= *(right))
                --right;
            if (*(p) > *right)
            {
                iter_swap(p, right);
                sort(right + 1, nums.end());
                return;
            }
            --p;
        }
        sort(right, nums.end());
        return;
    }
};
// @lc code=end
