#蓝桥杯2013年第四届真题-错误票据
n=int(input())
a=[]
while n>0:
    b=list(map(int,input().strip().split()))
    for i in b:
        a.append(i)
    n-=1
a=sorted(a)
for i in range(len(a)-1):
    if a[i]==a[i+1]:
        n=a[i]
    elif a[i]+1!=a[i+1]:
        m=a[i]+1
print(m,end=" ")
print(n)
