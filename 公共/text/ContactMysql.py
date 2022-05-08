import pymysql
class ContactMysql():
    def conMysql(self,sql):
        conn = pymysql.connect(host="localhost", port=3306, user="root", password="", db="xiao", charset="utf8")
        cur = conn.cursor()
        cur.execute(sql)
        conn.commit()