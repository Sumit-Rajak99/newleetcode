n = int(input())
arr = list(map(int, input().split()))

palindrome = True

for i in range(n // 2):
    if arr[i] != arr[n - 1 - i]:
        palindrome = False
        break

if palindrome:
    print("YES")
else:
    print("NO")