/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
#include <vector>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int phead = 0;
        int prear = height.size() - 1;
        int current_max = 0;
        while (phead != prear)
        {
            int temp_area = (prear - phead) * min(height[phead], height[prear]);
            current_max = max(current_max, temp_area);
            if (height[phead] < height[prear])
                phead++;
            else
                prear--;
        }
        return current_max;
    }
};
// @lc code=end
