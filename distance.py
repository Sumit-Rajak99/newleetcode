arr1=[1,2,4,5,6,7,8,9]
arr2=[5,67,8,9,0,3,4,5,7,8,9]
count = 0
d=2

for i in arr1:
    flag = True

    for j in arr2:
        if abs(i - j) <= d:
            flag = False
            break

    if flag:
        count += 1
print(count)        
