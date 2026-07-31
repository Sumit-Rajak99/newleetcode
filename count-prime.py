class Solution:
    def countPrimes(self, n: int) -> int:
        ans = 0

        for num in range(2, n):
            count = 0

            for i in range(1, num + 1):
                if num % i == 0:
                    count += 1

            if count == 2:
                ans += 1

        return ans