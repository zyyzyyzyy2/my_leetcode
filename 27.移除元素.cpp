/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
#include <vector>
using std::vector;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int q = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val)
            {
                nums[q++] = nums[i];
            }
        }
        return q;
    }
};
// @lc code=end
