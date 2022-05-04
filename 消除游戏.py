#数位排序
s=input()
while True:
    a=[0]*len(s)
    for j in range(1,len(s)-1):
        if s[j]==s[j-1] and s[j]!=s[j+1]:
            a[j]=a[j+1]=1
        elif s[j]!=s[j-1] and s[j]==s[j+1]:
            a[j]=a[j-1]=1
    s1=""
    for j in range(len(s)):
        if a[j]==0:
            s1+=s[j]
    if s1==s:
        if len(s)==0:
            print("EMPTY")
        else:
            print(s)
        break
    s=s1
