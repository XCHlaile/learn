#K-进制数  错误
N,K=map(int,input().strip().split())
sums=10**(N-1)
count=0
print(sums)
while True:
    if 10**(N-1)<=sums<10**N:
        a=str(sums)
        flag=1
        if len(a)!=1:
            for i in range(len(a)-1):
                if a[i]==a[i+1]==0:
                    flag=0
                    break
        if flag==1:
            count+=1
        if (sums+1)%K==0:
            sums=(sums+1)/K*10  #有问题
        else:
            sums+=1
    else:
        print(count)
        break
