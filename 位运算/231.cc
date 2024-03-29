/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n>0) && (n & (n-1)) ==0;
    }
};
// @lc code=end
/********************************************************************************
 * @brief 
 * 位运算中的按位与
 * 除小于等于0之外的数
 * n&n-1结果为0表示n为2的幂
 * 如8和7进行位与运算为0000
 * 9和8就就为不行
 ********************************************************************************/

