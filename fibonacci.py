class Solution:
    def fib(self, n: int) -> int:
        first = 0
        sec = 1

        for i in range(n):
            next_num = first + sec
            first = sec
            sec = next_num

        return first