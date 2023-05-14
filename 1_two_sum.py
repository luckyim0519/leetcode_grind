
#so at first I think of the brutal force to construct this solution and found that
# I can use the dictionary to optimize that in my heart

############ BRUTAL FORCE ###############

# so I was thinking to traverse all the array element first to get the remaining
# then traverse array again starting from the next position of the array till the end of array

ans = []

for i in range(len(nums)):
    remaining = target - nums[i]
    for j in range(i+1, len(nums)):
        if remaining == nums[j] :
            ans.append(i)
            ans.append(j)

return ans 

# Time complexity will be O(N^2)
# Space complexity will be O(1)

############### HASH MAP ################

# so this answer is thought by the solutions by other people but the idea is same
# so I know that I can only access to one element in one array and one elementi n hash
# we cannot concurrently access the 2 elements for summation of targets in the array 
# with 2 pointers as there is a sequence for the indices...

# { array }         { hashmap }

# as we traverse the array, we are going to check whether the previous traversed element is matching 
# with our current remaining value (it will keep updating!), make sure to use one for loop for O(n)!

hashmap = {} # key: num, value: indices
ans = []
for index, num in enumerate(nums):
    remaining = target - num
    if remaining not in hashmap: # this will check the key in the hashmap
        hashmap[num] = index
    else:
        ans.append(index)
        ans.append(hashmap[remaining])

return ans

