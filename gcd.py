A,B=map(int,input().split())
while B!=0:
    temp=A
    A=B
    B=temp%B
print(B)    