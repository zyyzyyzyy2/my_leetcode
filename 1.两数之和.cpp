/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i)
        {
            auto end = map.find(target - nums[i]);
            if (end != map.end())
                return {end->second, i};

            map.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};
// @lc code=end
