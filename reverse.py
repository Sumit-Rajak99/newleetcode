def rev(n):
    if n==1:
        return 1
    print(n,end=" ")
    return rev(n-1)

print(rev(5))