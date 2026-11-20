class Solution:
    def mostFrequentEven(self, nums: list[int]) -> int:

        res = {}

        for num in nums:
            if num % 2 == 0:
                res[num] = res.get(num, 0) + 1

        ans = -1
        max_freq = 0

        for num, freq in res.items():
            if freq > max_freq:
                max_freq = freq
                ans = num

            elif freq == max_freq and num < ans:
                ans = num

        return ans