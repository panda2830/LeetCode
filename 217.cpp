/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */
#include <iostream>
#include <vector>
#include <string.h>
#include <unordered_map> //无序表(hash map)
using namespace std;
// @lc code=start
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        typedef unordered_map<int, int> Mymap;
        Mymap m1;
        for (auto i = nums.begin(); i != nums.end(); i++) // 遍历数组nums
        {
            if (m1.find(*i) == m1.end())    //如果没找到*i值就插入这个值，反之这*i出现了两次返回true，遍历整个数组都没找到返回false
                m1.insert(Mymap::value_type(*i, 1));
            else
                return true;    
        }
        return false;
    }
};
// @lc code=end

/********************************************************************************
 * @brief
 * *给你一个整数数组 nums 。
 * *如果任一值在数组中出现 至少两次 ，返回 true ；
 * *如果数组中每个元素互不相同，返回 false 。
 * ?解题思路：将数组nums转换成hashmap，在转换的过程中每插入一个值（*i）就进行搜索，没找到插入这个值(*i)，
 * ?当下一次插入*i时搜索到了值表示*i出现了两次，整个数组转换完成时表示没有一个元素出现了两次，返回false
 ********************************************************************************/