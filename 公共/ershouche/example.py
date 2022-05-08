import pymysql

conn = pymysql.connect(host="localhost", port=3307, user="root", password="", db="ershouche", charset="utf8")
cur = conn.cursor()
sql = '''insert into '''+"beijing"+"_"+"aodi"+'''(类型,基本信息,现价,原价,链接)  values ('%s','%s','%s','%s','%s')'''%('s','s','s','s','s')
cur.execute(sql)
conn.commit()
print("插入第" + "条数据成功！")
conn.close()