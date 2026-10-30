class Solution:
    def secondHighest(self, s: str) -> int:
        largest = -1
        second_largest = -1

        for ch in s:
            if ch.isdigit():
                num = int(ch)

                if num > largest:
                    second_largest = largest
                    largest = num
                elif num < largest and num > second_largest:
                    second_largest = num

        return second_largest