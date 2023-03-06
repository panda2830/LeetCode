# 全字母句 指包含英语字母表中每个字母至少一次的句子。
#
#  给你一个仅由小写英文字母组成的字符串 sentence ，请你判断 sentence 是否为 全字母句 。
#
#  如果是，返回 true ；否则，返回 false 。
#
#
#
#  示例 1：
#
#
# 输入：sentence = "thequickbrownfoxjumpsoverthelazydog"
# 输出：true
# 解释：sentence 包含英语字母表中每个字母至少一次。
#
#
#  示例 2：
#
#
# 输入：sentence = "leetcode"
# 输出：false
#
#
#
#
#  提示：
#
#
#  1 <= sentence.length <= 1000
#  sentence 由小写英语字母组成
#
#
#  Related Topics 哈希表 字符串 👍 71 👎 0


# leetcode submit region begin(Prohibit modification and deletion)
class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        """
        哈希表
        建立一个位为256的哈希表并值全置为0
        遍历字符串将字符串单个字符的ascii码当成hash表索引并自增1
        遍历a到z的ascii码
        判断hash[i]是否为0，0返回False
        循环结束为真
        :param sentence:
        :return:
        """
        # 定义一个大小256值都为0的hash表
        hash1 = [x * 0 for x in range(256)]
        for i in range(len(sentence)):
            hash1[ord(sentence[i])] += 1
        for i in range(ord('a'), ord('z') + 1):
            if hash1[i] == 0:
                return False
        return True
# leetcode submit region end(Prohibit modification and deletion)
