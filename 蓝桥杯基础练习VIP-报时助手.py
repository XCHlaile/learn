#蓝桥杯基础练习VIP-报时助手
dict1={'0':'zero','1':'one','2':'two','3':'three','4':'four','5':'five',
       '6':'six','7':'seven','8':'eight','9':'nine','10':'ten',
       '11':'eleven','12':'twelve','13':'thirteen','14':'fourteen',
       '15':'fifteen','16':'sixteen','17':'seventeen','18':'eighteen',
       '19':'nineteen','20':'twenty','30':"thirty","40":"forty","50":"fifty"}
h,m=map(int,input().strip().split())
if 20<h:
    h1=h%10
    print(dict1[str(h-h1)],end=" ")
    print(dict1[str(h1)],end=" ")
    if m>20:
        m1=m%10
        print(dict1[str(m-m1)],end=" ")
        print(dict1[str(m1)])
    elif m==0:
        print("o'clock")
    else:
        print(dict1[str(m)])
else:
    print(dict1[str(h)],end=" ")
    if m>20:
        m1=m%10
        print(dict1[str(m-m1)],end=" ")
        print(dict1[str(m1)])
    elif m==0:
        print("o'clock")
    else:
        print(dict1[str(m)])
