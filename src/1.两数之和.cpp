/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> HashMap;
        int key_number = 1;
        // 转成成转换为Hash表(key和vaule反过来)
        for (auto i = nums.begin(); i != nums.end(); i++)
            HashMap.insert(pair<int, int>(*i, key_number++));

        for (auto i = HashMap.begin(); i != HashMap.end(); i++)
        {
            // cout << i->first << " " << i->second << endl;
            int difference = target - i->first;
            if (HashMap[difference] && HashMap[difference] != i->second)
                return vector<int>{HashMap.at(difference) - 1, i->second - 1};
        }
        exit(1);
    }
};
// @lc code=end
