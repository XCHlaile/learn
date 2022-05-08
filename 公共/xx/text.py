import sqlite3

conn = sqlite3.connect("Shift_MIS.db")
cur = conn.cursor()
cur.execute("PRAGMA foreign_keys = ON")


def create_table(tab_name, col_prop_list, txt_path, conn=conn, cur=cur):
    col_name_props = ','.join(col_prop_list)
    cur.execute('CREATE TABLE IF NOT EXISTS %s(%s)' % (tab_name, col_name_props))
    f = open(txt_path, 'r')
    for x in f:
        x = x.rstrip().split(',')
        a = ["'%s'" % x[i] for i in range(len(x))]
        x = ','.join(a)
        cur.execute('INSERT INTO %s values (%s)' % (tab_name, x))
    f.close()
    print('%s创建成功' % tab_name)
    print('         %s导入成功' % txt_path)
    conn.commit()


def table_struct(table_name, cur=cur):
    cur.execute("PRAGMA table_info(%s)" % table_name)
    t_struct = cur.fetchall()
    for item in t_struct:
        for x in item:
            x = str(x)
            print(x, sep='\t', end=' ')
        print()


def table_quer(table_name, col_names='*', num_line=None, cur=cur):
    cur.execute('select %s from %s' % (col_names, table_name))
    Li = cur.fetchall()
    for line in Li[:num_line]:
        for item in line:
            print(item, sep='\t', end=' ')
        print()


if True:
    tab_name_1 = '专业表'
    col_prop_list_1 = ['专业编号 varchar(7) primary key',
                       '专业名称 varchar(7)']
    txt_path_1 = '专业表.txt'
    create_table(tab_name_1, col_prop_list_1, txt_path_1)

    tab_name_2 = '学生表'
    col_prop_list_2 = ['学号 varchar(7) primary key',
                       '姓名 varchar(7)',
                       '性别 tinyint',
                       '生日 text NULL',
                       '专业编号 varchar(7) REFERENCES 专业表(专业编号) ON UPDATE CASCADE ON DELETE CASCADE',
                       '奖学金 numeric NULL',
                       '党员 tinyint NULL',
                       '照片 blob NULL',
                       '备注 text NULL']
    txt_path_2 = '学生表.txt'
    create_table(tab_name_2, col_prop_list_2, txt_path_2)

    tab_name_3 = '课程表'
    col_prop_list_3 = ['课程号 varchar(7) primary key',
                       '课程名称 varchar(7) NULL',
                       '先修课程代码 varchar(7) NULL',
                       '学时 smallint',
                       '学分 smallint']
    txt_path_3 = '课程表.txt'
    create_table(tab_name_3, col_prop_list_3, txt_path_3)

    tab_name_4 = '成绩表'
    col_prop_list_4 = ['学号 varchar(7) REFERENCES 学生表(学号) ON UPDATE CASCADE ON DELETE CASCADE',
                       '课程号 varchar(7) REFERENCES 课程表(课程号) ON UPDATE CASCADE ON DELETE CASCADE',
                       '成绩 smallint NULL',
                       'PRIMARY KEY (学号,'
                       ''
                       '课程号)']
    txt_path_4 = '成绩表.txt'
    create_table(tab_name_4, col_prop_list_4, txt_path_4)
