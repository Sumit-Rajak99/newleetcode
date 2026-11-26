def fivo(n):
    if n==0 or n==1:
        return n
    return fivo(n-1)+fivo(n-2)

print(fivo(6))