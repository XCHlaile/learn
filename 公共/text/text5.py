#三位数中各个数字的立方和等于这个数字  instance:153=1*1*1+5*5*5+3*3*3
for i in range(100,1000):
    a=str(i)
    if (int(a[0])**3+int(a[1])**3+int(a[2])**3)==i:
        print(i)

#杨辉三角形又称Pascal三角形，它的第i+1行是(a+b)i的展开式的系数。
n=int(input())
row=[]
for i in range(n):
    col=[]
    if i==0:
        col=[1]
    elif i==1:
        col=[1,1]
    else:
        for j in range(i+1):
            if j ==0 or j ==i:
                col.append(1)
            else:
                col.append(row[i-1][j-1]+row[i-1][j])
    row.append(col)
for i in row:
    for j in i:
        print(j,end=" ")
    print()

#杨辉三角形
n = int(input())
line = [1]
num = 0
while n != num:
    print(" ".join(str(j) for j in line))
    # 设上一个为[1],通过式子可得[1,1],继而[1,2,1]......
    line = [1] + [line[i] + line[i + 1] for i in range(len(line) - 1)] + [1]
    num += 1
