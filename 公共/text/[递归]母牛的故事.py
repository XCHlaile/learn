#母牛的故事(动态规划)
a=[]
c=[0,1,2,3,4]
while True:
    b=int(input())
    if b==0:
        break
    a.append(b)
for i in a:
    while i>len(c)-1:
        c.append(c[-1]+c[-3])
    print(c[i])

