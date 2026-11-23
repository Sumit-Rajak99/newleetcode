l=[45,78,56,35,34]
even=0
odd=0

for i in range(len(l)):
    if l[i]%2==0:
        even=even+1
    else:
        odd=odd+1
print(even)
print(odd)