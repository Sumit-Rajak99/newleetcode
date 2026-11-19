# # Q1. Find the second largest unique number without using sort() or sorted().

numbers = [10, 20, 5, 40, 30, 40, 20]
larg=0
sec_larg=0

for i in range(len(numbers)):
    if numbers[i]>larg:
        sec_larg=larg
        larg=numbers[i]
    elif numbers[i]>sec_larg and numbers[i]<larg:
        sec_larg=numbers[i]
print(sec_larg)

# Q2. Remove duplicate elements from a list without using set().

numbers = [1, 2, 3, 2, 4, 1, 5]
res=[]
for i in range(len(numbers)):
    if numbers[i]  not in res:
        res.append(numbers[i])
print(res)         

# Q3. Count the frequency of each character in a string.

s = "programming"
res = {}

for i in s:
    if i in res:
        res[i] += 1
    else:
        res[i] = 1

print(res)



# Next Question – Python Q4
# String Logic

# Write a Python function to check whether a string is a palindrome or not.
def palindrome(s):
    res = ""

    for i in range(len(s)-1, -1, -1):
        res += s[i]

    if s == res:
        print("Palindrome")
    else:
        print("Not Palindrome")

palindrome("madam")

# Find common elements between two lists without using set().

list1 = [1, 2, 3, 4, 5, 6]
list2 = [4, 5, 6, 7, 8, 9]

l3=[]
for i in range(len(list1)):
    for j in range(len(list2)):
        
        if list1[i]==list2[j]:
            l3.append(list1[i])
print(l3)        