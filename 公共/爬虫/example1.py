import pandas as pd

df1 = pd.read_excel('C:\\Users\\16707\\Desktop\\个人文件\\全网营销\\data1.xlsx')
data1 = df1.iloc[:,[2]].values
for data in data1:
    print(str(data))
#for i in data1:
   # print(i)
