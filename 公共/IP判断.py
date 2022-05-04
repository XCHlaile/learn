#IP判断
while True:
   List=input()
   if(List=='End of file'):
       break
   else:
       List=List.split('.')
       pan=1
       for i in List:
           if(i.isdigit() and 0<=int(i)<=255): #isdigit()判断字符串是否为纯数字
               continue
           else:
               pan=0
       if(pan==1):
           print("Y")
       else:
           print('N')
