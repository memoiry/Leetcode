class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in nums:
            dif = target - i
            nums1 = nums[:]
            a = nums1.index(i)
            del nums1[a]
            if dif in nums1 :
                b = nums1.index(dif) + 1
                return [a,b]