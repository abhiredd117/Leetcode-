class Solution(object):
    def findDuplicates(self, nums):
        duplicates = []

        for num in nums:
            index = abs(num) - 1

            if nums[index] < 0:
                duplicates.append(index + 1)
            else:
                nums[index] = -nums[index]

        return duplicates
