#无重复字符的最长子串
def f(s):
    maxs=0
    left=0
    sets=set()
    sums=0
    for i in range(len(s)):
        sums+=1
        while s[i] in sets:
          sets.remove(s[left])
          left+=1
          sums-=1
        if sums>maxs:
            maxs=sums
        sets.add(s[i])
    print(maxs)
f("abcabcbb")
