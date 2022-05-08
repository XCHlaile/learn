import pandas as pd
import time

import pymysql
import requests
from bs4 import BeautifulSoup
import re
import os
#职位信息
find_tu = re.compile(r'<p>(.*?)</p>')
headers = {'User-Agent':
               'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/93.0.4577.63 Safari/537.36'}
#爬取网页地址
#url = 'https://jobs.51job.com/beijing-ftq/135237720.html?s=sou_sou_soulb&t=0_0'
def paqu(url):
    req = requests.get(url, headers=headers)
    req.encoding = 'gbk'
    html = req.text
    bs = BeautifulSoup(html, "html.parser")
    t_list1 = bs.find_all(r"div", {'class': "bmsg job_msg inbox"})
    print(t_list1)
    for item in t_list1:
        url_1=re.findall(find_tu,str(item))
        print(url_1)
        #SaveData(url)



def SaveData(datalist):
    conn = pymysql.connect(host="localhost", port=3306, user="root", password="", db="xiao", charset="utf8")
    cur = conn.cursor()
    b = 0
    for data in datalist:
        b += 1
        values = list(data.values())
        for index in range(len(values)):
            values[index] = '"' + values[index] + '"'
        sql = '''insert into gangwei(岗位要求)  values ({})'''.format(",".join(values))
        cur.execute(sql)
        conn.commit()
        print("插入第" + str(b) + "条数据成功！")
    conn.close()

if __name__ == '__main__':
    df1 = pd.read_excel('C:\\Users\\16707\\Desktop\\个人文件\\全网营销\\data1.xlsx')
    data1 = df1.iloc[:, [2]].values
    for data in data1:
        paqu(str(data[0]))
        time.sleep(1)