def solutions(nums,target)->int:
    n = len(nums) - 1
    return find(nums,0,n,target)
def find(nums,l,r,target)->int:
    while l <= r:
        mid = (l+r)//2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            l = mid + 1    
        else:
            r = mid - 1
    
    return l

print(solutions([1,3,5,6],4))