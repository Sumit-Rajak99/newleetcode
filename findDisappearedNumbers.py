class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        
        ans = []
        n=set(nums)
        size=len(n)
        sum=0

        for i in range(1, len(nums)+1):
            if i not in n:
                ans.append(i)
            elif i==i+1:
                sum=sum+i
                ans.append(sum)

        return ans        



        