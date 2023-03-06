# 给你一个长度为 n 的整数数组 nums ，其中 nums 的所有整数都在范围 [1, n] 内，且每个整数出现 一次 或 两次 。请你找出所有出现 两次
# 的整数，并以数组形式返回。
#
#  你必须设计并实现一个时间复杂度为 O(n) 且仅使用常量额外空间的算法解决此问题。
#
#
#
#  示例 1：
#
#
# 输入：nums = [4,3,2,7,8,2,3,1]
# 输出：[2,3]
#
#
#  示例 2：
#
#
# 输入：nums = [1,1,2]
# 输出：[1]
#
#
#  示例 3：
#
#
# 输入：nums = [1]
# 输出：[]
#
#
#
#
#  提示：
#
#
#  n == nums.length
#  1 <= n <= 10⁵
#  1 <= nums[i] <= n
#  nums 中的每个元素出现 一次 或 两次
#
#
#  Related Topics 数组 哈希表 👍 690 👎 0


# leetcode submit region begin(Prohibit modification and deletion)
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        """
        哈希表
        定义一个长度为n+1的哈希表并元素全置为0
        定义一个空list
        遍历nums，nums的值为hash表的索引并自增1。
        如果同一元素的hash值到2表明出现了两次，放入list中。遍历完返回列表
        :param nums:
        :return:
        """
        # 定义一个长度为n+1的hash表
        hash1 = [x * 0 for x in range(len(nums) + 1)]
        # 定义一个空的列表
        list1 = []
        for i in range(len(nums)):
            # 让nums的位为hash表的索引并自增1
            hash1[nums[i]] += 1
            # 当出现两次时入队
            if hash1[nums[i]] == 2:
                list1.append(nums[i])
        return list1
# leetcode submit region end(Prohibit modification and deletion)
