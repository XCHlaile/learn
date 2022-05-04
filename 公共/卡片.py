#卡片
dict1=2021
i=1
while True:
    a=str(i)
    dict1-=a.count("1")
    if dict1<0:
        print(i-1)
        break
    i+=1
    
    
