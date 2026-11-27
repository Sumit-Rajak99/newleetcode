def sumdigit(n):
    if n==0:
        return n
    rv=n%10
    return rv+sumdigit(n//10)

print(sumdigit(345))