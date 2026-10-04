nums=[0,1,1,0,1,1,1,1,0,0,1,0,1,1,1,1,1]
count=0
max=0

for i in range(len(nums)):
    if nums[i]!=0:
        count=count+1
        
        if count>max:
            max=count
    else:
        count=0
print(max)   
print(count)             
        


# move all zeros two pointers
nums = [0, 1, 0, 3,7,0, 12]

j = 0

for i in range(len(nums)):
    if nums[i] != 0:
        temp=nums[i]
        nums[i]=nums[j]
        nums[j]=temp
        j += 1

print(nums)



# swapping
       