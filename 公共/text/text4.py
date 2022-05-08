#找出最长的递增的子序列
def length_L(nums):
    n=len(nums)
    L=[1]*n
    for i in reversed(range(n)):
        for j in range(i+1,n):
            if nums[j]>nums[i]:
                L[i]=max(L[i],L[j]+1)
    return max(L)
print(length_L([1,5,2,4,3]))

def length_L2(nums,i):
        if i==len(nums)-1:
            return 1
        max_len=1
        for j in range(i+1,len(nums)):
            if nums[j]>nums[i]:
                max_len=max(max_len,L(nums,j)+1)
        return max_len
def lenght_L21(nums):
    return max(length_L2(nums,i) for i in range(len(nums)))
print(length_L([1,5,2,4,3]))

#找出连续子序列的最大和
def length_L3(nums):
    n=len(nums)
    L=nums
    for i in reversed(range(n)):
        if i==n-1:
            L[i]=L[i]
        else:
            L[i]=max(L[i]+L[i+1],L[i])
    return max(L)
print(length_L3([3,-4,2,-1,2,6,-5,4]))
        
