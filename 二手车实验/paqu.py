import time
import pymysql
import requests
from bs4 import BeautifulSoup
import re


#正则提取数据
find_t1 = re.compile(r'<h4 class="card-name">(.*?)</h4>')
find_t2 = re.compile(r'<p class="cards-unit">(.*?)</p>')
find_t3 = re.compile(r'<em>(.*?)</em>')
find_t4 = re.compile(r'<s>(.*?)</s>')
find_t4_1 = re.compile(r'(.*?)万')
find_t5 = re.compile(r'href="(.*?)"')
headers = {'User-Agent':
               'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/93.0.4577.63 Safari/537.36'}

weizhi = ['beijing','shanghai','nanchang','chongqing','fuzhou','changsha']
pinpai = ['benchi','aodi','baoma','dazhong','fengtian','luhu','bentian']
def Count(n):
    for j in weizhi:
        for x in pinpai:
            for i in range(0,n):
                url = 'https://www.che168.com/' + j + '/' + x + '/a0_0msdgscncgpi1ltocsp' + str(i+1) + 'exx0/?pvareaid=102179#currengpostion'
                Url(url,j,x)
                print("休息10秒")
                time.sleep(10)

def Url(url,j,x):
    req = requests.get(url, headers=headers)
    html = req.text
    bs = BeautifulSoup(html, "html.parser")
    t_list = bs.find_all(r"li", {'class': "cards-li list-photo-li"})
    cont = 0
    for i in t_list:
        cont += 1
        if cont==57:
            break
        else:
            try:
                url_1=re.findall(find_t1,str(i))
                url_2=re.findall(find_t2,str(i))
                url_3=re.findall(find_t3,str(i))
                url_4=re.findall(find_t4,str(i))
                url_4_1= re.findall(find_t4_1,url_4[0])
                url_5=re.findall(find_t5,str(i))
                print(url_1,url_2,url_3,url_4_1,url_5)
                print(cont)
                SaveData(cont,url_1,url_2,url_3,url_4_1,url_5,j,x)
            except:
                continue

# 将数据保存到MySQL
def SaveData(cont,url_1,url_2,url_3,url_4_1,url_5,j,x):
    conn = pymysql.connect(host="localhost", port=3307, user="root", password="", db="ershouche", charset="utf8")
    cur = conn.cursor()
    sql = '''insert into '''+j+"_"+x+'''(类型,基本信息,现价,原价,链接)  values ('%s','%s','%s','%s','%s')'''%(url_1[0],url_2[0],url_3[0],url_4_1[0],"www.che168.com"+url_5[0])
    cur.execute(sql)
    conn.commit()
    print("插入第" + str(cont) + "条数据成功！")
    conn.close()


Count(2)