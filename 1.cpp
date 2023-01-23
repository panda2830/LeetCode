/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <iostream>
#include <vector>
#include <unordered_map> //无序表(hash map)
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        typedef unordered_map<int, int> Mymap;
        Mymap m1;
        int number = 0;                                   // 计数器
        for (auto i = nums.begin(); i != nums.end(); i++) //遍历数组nums
        {
            m1.insert(Mymap::value_type(*i, number));
            Mymap::iterator v = m1.find(target - *i);
            if (v != m1.end() && v->second != number)
            {
                return vector<int>{number, v->second};
            }
            number++;
        }
        return vector<int>{0, 0};
    }
};
// @lc code=end

/********************************************************************************
 * @brief 
 ** 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
 ** 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
 ** 你可以按任意顺序返回答案。
 *? 解题思路：通过遍历数组nums把数组nums转换为hashmap，key是nums的值value是nums数组的下标。
 *? 例nums[2,4,6]，map[[2,0],[4,1],[6,2]]。
 *? 每当为map插入一个值后就进行搜索，搜索值为target-*i。例target=9，当前插入的值为2，搜索key是7(7由9-2得出)的那队值v，如果找到v并且v的value不等于number就解题成功
 *? 反之重复上面操作
 ********************************************************************************/