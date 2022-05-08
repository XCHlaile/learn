class Solution:
    def strStr(self, haystack: str, needle: str):
        return haystack.find(needle)
        len_h=len(haystack)
        len_n=len(needle)
        if len_n>len_h:
            return -1
        if len_n==0:
            return 0
        light=0
        right=0
        while right<len_n and light<len_h:
            if haystack[light]==needle[right]:
                light+=1
                right+=1
            else:
                light=light-right+1
                right=0
        if right==len_n:
            return i-j
        return -1
A=Solution()
print(A.strStr("",""))
