num=[3,4,6,7,8,9,0,0,5,12,12,9]
larg=0
sec_larg=0

for i in range(len(num)):
    if num[i]>larg:
        sec_larg=larg
        larg=num[i]
    elif num[i]>sec_larg and num[i]<larg:
        sec_larg=num[i]
print(sec_larg)            