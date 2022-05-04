#罗马数字转整数
def romanToInt(s):
    dic = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000,'IV':4,'IX':9,'XL':40,'XC':90,'CD':400,'CM':900} #构建哈希表
    sums=0
    i=0
    while i <len(s)-1:
        temp = s[i]+s[i+1]
        if temp in dic:
            sums+=dic[temp]
            i+=2
        else:
            sums+=dic[s[i]]
            i+=1
    if i <len(s):
        sums+=dic[s[len(s)-1]]
    return sums    
print(romanToInt("IV"))
        
