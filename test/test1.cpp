/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map> //c++11中unordered_map替代了hash_map
using namespace std;

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         return vector<int>{1, 2, 3, 4, 5};
//     }
//     vector<int> twoSumTest(vector<int> nums, int target)
//     {
//         unordered_map<int, int> map1;
//         int key_number = 0;
//         // 转成成map1表
//         for (auto i = nums.begin(); i != nums.end(); i++)
//             map1.insert(pair<int, int>(*i, key_number++));
//         // for(auto i = nums.back(); i != number)

//         exit(0);
//     }
// };

int main(int argc, char **argv)
{
    // Solution test;
    // vector<int> a = test.twoSumTest(vector<int>{3, 2, 4}, 6);
    // for (auto i = a.begin(); i != a.end(); i++)
    //     cout << *i << " ";
    vector<int> v1{1,2,3,4,5,12};
    unordered_map<int, int> test{{12, 1}, {24, 2}, {36, 3}};
    try
    {
        for(auto i = v1.begin();i !=v1.end();i++)
        {
            test.at(*i);
        }
    }
    catch (...)
    {
        cout << "error" << endl;
    }

    return 0;
}
