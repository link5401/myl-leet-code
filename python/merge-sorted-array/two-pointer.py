def merge(nums1, m, nums2, n):
    i = m - 1
    j = n - 1
    k = m +n - 1
    while (j>= 0):
        if (i>= 0 and nums1[i] > nums2[j]):
            nums1[k] = nums1[i]
            i-=1
        else:
            nums1[k] = nums2[j]
            j-=1
        k-=1
    print(nums1)
merge([0,2,3,5,8,0], 4 , [2,5], 2)