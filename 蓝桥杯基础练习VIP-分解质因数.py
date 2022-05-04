#蓝桥杯基础练习VIP-分解质因数
p_nums = [2]
for i in range(3, 10000):
    tag = True
    for p_num in p_nums:
        if i % p_num == 0:
            tag = False
    if tag:
        p_nums.append(i)
l, r = map(int, input().split())
for i in range(l, r+1):
    num = i
    nums = []
    for p_num in p_nums:
        if p_num > r+1:
            break
        while num % p_num == 0:
            nums.append(str(p_num))
            num = num//p_num
    print("{}={} ".format(i, "*".join(nums)))

