nums=[23,67,65,34,24,67,89,56,89]
larg=float("-inf")
sec_larg=float("-inf")

for i in range(len(nums)):
    if nums[i]>larg:
        sec_larg=larg
        larg=nums[i]
    elif nums[i]>sec_larg and nums[i]<larg:
        
        
        sec_larg=nums[i]
print(sec_larg)                