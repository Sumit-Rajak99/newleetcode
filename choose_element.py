n, k = map(int, input().split())
arr = list(map(int, input().split()))

arr.sort(reverse=True)

ans = 0

for i in range(k):
    if arr[i] > 0:
        ans += arr[i]

print(ans)