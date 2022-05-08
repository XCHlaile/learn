import pymysql
from flask import Flask, render_template
import datetime
import re
weizhi = ['beijing','shanghai','nanchang','chongqing','fuzhou','changsha']
pinpai = ['benchi','aodi','baoma','dazhong','fengtian','luhu','bentian']
find_age = re.compile(r'''公里／(.*?)／''')
# 现在均价
def Count():
    prive=[]
    for j in weizhi:

        pr=[]
        for x in pinpai:
            sql = 'SELECT ' + j + '_' + x + '.`现价` FROM ' + j + '_' + x
            data = chuli(ConMysql1(sql))
            pr.append(data)
        prive.append(pr)
    return prive[0],prive[1],prive[2],prive[3],prive[4],prive[5]

app = Flask(__name__)

def chuli(data):
    num=0
    sum=0
    for i in data:
        sum = sum+float(i[0])
        num+=1
    print(round(sum/num,2))
    return round(sum/num,2)

#折扣
def Prive():
    prive = []
    for x in pinpai:
        pr = []
        for j in weizhi:
            sql = 'SELECT ' + j + '_' + x + '.`现价` ,' + j + '_' + x + '.`原价` FROM ' + j + '_' + x
            data = chuli2(ConMysql1(sql))
            pr.append(data)
        sum=0
        for i in pr:
            sum = sum + float(i)
        prive.append(round(float(sum)/float(len(pr)),3))
    return prive

def chuli2(data):
    a=[]
    sum=0
    for i in data:
        b = i[0]
        c=i[1]
        a.append(round(float(b)/float(c),3))
    for i in a:
        sum = sum + float(i)
    return round(float(sum)/float(len(a)),3)*100

def Age():
    prive = [0,0,0,0,0,0]
    for j in weizhi:
        pr = [0,0,0,0,0,0]
        for x in pinpai:
            sql = 'SELECT ' + j + '_' + x + '.`基本信息` FROM ' + j + '_' + x
            age0_1,age1_2,age2_3,age3_4,age4_5,age5_ = chuli3(ConMysql1(sql))
            pr[0]+=age0_1
            pr[1] +=age1_2
            pr[2] +=age2_3
            pr[3] +=age3_4
            pr[4] +=age4_5
            pr[5] +=age5_
        prive[0]+=pr[0]
        prive[1] += pr[1]
        prive[2] += pr[2]
        prive[3] += pr[3]
        prive[4] += pr[4]
        prive[5] += pr[5]
    return prive

def chuli3(data):
    age0_1=0
    age1_2 = 0
    age2_3 = 0
    age3_4 = 0
    age4_5 = 0
    age5_=0
    now=datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')
    datetime_a = datetime.datetime.strptime(now, '%Y-%m-%d %H:%M:%S')
    for i in data:
        age = re.findall(find_age,str(i))
        a=age[0]
        try:
            dateTime_p = datetime.datetime.strptime(a, '%Y-%M')
            age_age=int(((datetime_a - dateTime_p).days)/365)
            if age_age==0:
                age0_1+=1
            elif age_age == 1:
                age1_2+=1
            elif age_age == 2:
                age2_3+= 1
            elif age_age==3:
                age3_4+=1
            elif age_age==4:
                age4_5+=1
            else:
                age5_+=1
        except:
            continue
    return age0_1,age1_2,age2_3,age3_4,age4_5,age5_

def ConMysql1(sql):
    conn = pymysql.connect(host="localhost", port=3307, user="root", password="", db="ershouche", charset="utf8")
    cur = conn.cursor()
    sql = sql
    cur.execute(sql)
    res = cur.fetchall()
    conn.close()
    return res

@app.route('/')
def hello_world():
    data = Count()
    prive=Prive()
    age=Age()
    return render_template('index.html', data=data,prive=prive,age=age)


if __name__ == '__main__':
    app.run()
