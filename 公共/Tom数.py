#Tom数
while True:
    num=input()
    sums=0
    for i in num:
        sums=sums+ord(i)-ord("0")
    print(sums)
