#利用字母可以组成一些美丽的图形
n,m=map(int,input().strip().split())
list1=[chr(ord('A')+i) for i in range(m)]
for i in range(n):
    for k in range(m):
        print(list1[k],end="")
    for j in range(m):
        a=list1[j]
        
    print()
#有错误，不完整
