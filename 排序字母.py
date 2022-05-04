n,m=map(int,input().split())
a=[]
b=[]
c=[]
d=[]
for i in range(1,n+1):
    sums=0
    if i==1:
        a.append(1)
        b.append(1)
        c.append(1)
        d.append(1)
    else:
        s=str(i)
        for j in s:
            sums+=ord(s[j])-ord("0")
        
            
