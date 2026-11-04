class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        ans = []
        total = 0

        for i in range(len(accounts)):
            total = sum(accounts[i])
            ans.append(total)

        max_wealth = ans[0]

        for i in range(len(ans)):
            if ans[i] > max_wealth:
                max_wealth = ans[i]

        return max_wealth