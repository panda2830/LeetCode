/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <iostream> 
#include <vector>
#include <map>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map1;
        int key_number = 0;
        // 转成成map1表
        for (auto i = nums.begin(); i != nums.end(); i++)
            map1.insert(pair<int, int>(*i, key_number++));
        //// for (auto i = map1.begin(); i != map1.end(); i++)
        //// {
        ////     auto j = i;
        ////     j++;
        ////     for (; j != map1.end(); j++)
        ////         if ((i->second + j->second) == target)
        ////             return vector<int>{i->first, j->first};
        //// }
        for (auto i = map1.begin(); i != map1.end(); i++)
        {
            int difference_value = target - i->first; //获取差值
            auto itorator2 = map1.find(difference_value);
            if ((itorator2 != map1.end()) && (itorator2->second != i->second))
                return vector<int>{i->second, itorator2->second};
        }
        exit(0);
    }
};
// @lc code=end

int main(int argc, char **argv)
{
    Solution test;

    
}

