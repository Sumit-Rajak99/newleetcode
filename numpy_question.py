# Q2 create a (2,4 ) of random intger number and calculate folloewing pints
# 1 calculate column wise ,mean of data 
# 2calculate row wise ,median of data 
# 3 calculate std and varinace of array
# 4 calculate row wise sum the values

import numpy as np

np.random.seed(4)


arr = np.random.randint(1, 9, 8).reshape(2, 4)

print("Array:")
print(arr)


print("Column-wise Mean:", np.mean(arr, axis=0))

# 2. Row-wise median
print("Row-wise Median:", np.median(arr, axis=1))

# 3. Standard deviation
print("Standard Deviation:", np.std(arr))

# 3. Variance
print("Variance:", np.var(arr))

# 4. Row-wise sum
print("Row-wise Sum:", np.sum(arr, axis=1))