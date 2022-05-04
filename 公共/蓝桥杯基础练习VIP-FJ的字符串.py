#蓝桥杯基础练习VIP-FJ的字符串
n=int(input())
a=""
for i in range(1,n+1):
    a=a+chr(64+i)+a
print(a)
