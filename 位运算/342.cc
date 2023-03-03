/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        return ((n > 0) && (n % 3 == 1)) && ((n & n-1) == 0);
    }
};
// @lc code=end

// 2的偶数次幂%3等于1
// 2的奇数次幂%3等于2
// 2的偶数次幂是4的幂
// 先判断是否是2的幂
// 判断是否中2的偶数幂