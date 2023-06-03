def removeDuplicates(nums):
    if len(nums) < 2: return len(nums)
    i,j = 2, 2
    while j < len(nums):
        if(nums[i-2] != nums[j]):
            nums[i] = nums[j]
            i+=1
        j += 1
    return nums[:j]
print(removeDuplicates([0,1,1,1,2]))