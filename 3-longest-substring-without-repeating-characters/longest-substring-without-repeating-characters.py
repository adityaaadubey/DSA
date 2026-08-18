class Solution(object):
    def lengthOfLongestSubstring(self, s):
        temp=set()
        l=0
        output=0
        for i in range(len(s)):
            while s[i] in temp:
                temp.remove(s[l])
                l+=1
            temp.add(s[i])
            output=max(output,i-l+1)
        return output