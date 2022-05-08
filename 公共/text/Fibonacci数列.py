#Fibonacci数列
n=int(input())
if n==1 or n==2:
    print(sums%10007)
else:
    l=1
    r=1
    sums=0
    for i in range(2,n):
        sums=(l+r)%10007
        l=r%10007
        r=sums%10007
    print(sums)
#有bug
    
