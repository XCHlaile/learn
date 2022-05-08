#01字串
list1=[0,0,0,0,0]
i=0
while i<32:
    for j in list1:
        print(j,end="")
    if list1[4]==1:
        list1[4]=0
        if list1[3]==1:
            list1[3]=0
            if list1[2]==1:
                list1[2]=0
                if list1[1]==1:
                    list1[1]=0
                    list1[0]=1
                else:
                    list1[1]=1
            else:
                list1[2]=1
        else:
            list1[3]=1
    else:
        list1[4]=1
    print()
    i+=1
