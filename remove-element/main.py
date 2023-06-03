def removeElement(nums, val):
    n = len(nums)
    i = 0
    while i < n:
        if nums[i] == val:
            nums[i] = nums[n-1]
            n-=1
        else:
            i += 1
    return nums[:n]

print(removeElement([0,1,2,2,3,0,4,2],2))