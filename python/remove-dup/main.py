def removeDuplicates(nums):
    n = len(nums)
    j =  1
    for i in range(1,n):
        if nums[i-1] != nums[i]:
            nums[j] = nums[i]
            j += 1
    return nums[j]
print(removeDuplicates([0,0,1,1,1,2,2,3,3,4]))

# 
#*
#   i
# 0 0 1 1 1 2 2 3 3 4 
#   j
# 
#     i  
# 0 0 1 1 1 2 2 3 3 4
#   j
#
#       i
# 0 1 1 1 1 2 2 3 3 4
#     j
#   
# *#