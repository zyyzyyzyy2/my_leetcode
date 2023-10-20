/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
#include <vector>
using std::vector;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() < 2)
            return nums.size();

        int nums_length = 1;

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[nums_length - 1] < nums[i])
            {
                nums[nums_length++] = nums[i];
            }
        }
        return nums_length;
    }
};
// @lc code=end
