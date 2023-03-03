# 给你一个整数数组 nums 。数组中唯一元素是那些只出现 恰好一次 的元素。
#
#  请你返回 nums 中唯一元素的 和 。
#
#
#
#  示例 1：
#
#  输入：nums = [1,2,3,2]
# 输出：4
# 解释：唯一元素为 [1,3] ，和为 4 。
#
#
#  示例 2：
#
#  输入：nums = [1,1,1,1,1]
# 输出：0
# 解释：没有唯一元素，和为 0 。
#
#
#  示例 3 ：
#
#  输入：nums = [1,2,3,4,5]
# 输出：15
# 解释：唯一元素为 [1,2,3,4,5] ，和为 15 。
#
#
#
#
#  提示：
#
#
#  1 <= nums.length <= 100
#  1 <= nums[i] <= 100
#
#
#  Related Topics 数组 哈希表 计数 👍 77 👎 0


# leetcode submit region begin(Prohibit modification and deletion)
class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        """
        哈希表
        从题目提示中可得知元素长度和值的范围是1-100
        可创建一个大小为101的哈希表并让值置为0 (has1)
        遍历nums，nums中的元素为has1表的索引，并让hash1中的值自增1
        建立一个sum1变量记录只出现一次元素的和
        遍历hash1如果中的值为1让sum1加上索引
        :param nums:
        :return:
        """
        # 建立hash给表
        hash1 = [x * 0 for x in range(1, 102)]
        for i in range(len(nums)):
            hash1[nums[i]] += 1
        sum1 = 0
        for i in range(len(hash1)):
            if hash1[i] == 1:
                sum1 += i
        return sum1
# leetcode submit region end(Prohibit modification and deletion)
