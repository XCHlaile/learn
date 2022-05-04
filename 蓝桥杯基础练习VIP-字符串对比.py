#蓝桥杯基础练习VIP-字符串对比
a=input()
b=input()
if len(a)==len(b):
    if a==b:
        print(2)
    elif a.upper()==b.upper():
        print(3)
    else:
        print(4)
else:
    print(1)
