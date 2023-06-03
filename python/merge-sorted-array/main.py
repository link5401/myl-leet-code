def merge(nums1, m, nums2, n):
    nums1 = nums1[0:m]
    nums1+=nums2[0:n]
    nums1.sort()
    print(nums1)
merge([1,2,3,0,0,0], 3, [2,5,6], 3)