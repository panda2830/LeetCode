/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int j = 0;
        while (n)
        {
            n &= n - 1;
            j++;
        }
        return j;
    }
};
// @lc code=end

// 位运算
// 十进制10的二进制是 1010
// 十进制9的二进制是   1001
// n和n-1进制位与运算结果为1000
// 此时将消除一个1
// 直到为0000
// 循环此操作并用计数器记录1消除的次数
// 就是1的个数