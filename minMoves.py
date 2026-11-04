class Solution:
    def minMoves(self, nums: list[int]) -> int:
        min_val = nums[0] 
        moves = 0
        
       
        for num in nums:
            if num < min_val:
                min_val = num
                
        for num in nums:
            moves += num - min_val
            
        return moves