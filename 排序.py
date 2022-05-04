def fun_sum(num):
    sum_n = 0
    while num!=0:
        sum_n+=num%10
        num=int(num/10)
    return sum_n
    
num = int(input())
index = int(input())
nums = [i for i in range(1,num+1)]

for i in range(num):
    for j in range(num-1-i):
        if fun_sum(nums[j])>fun_sum(nums[j+1]):
            temp = nums[j]
            nums[j] = nums[j+1]
            nums[j+1] = temp
print(nums[index-1])
