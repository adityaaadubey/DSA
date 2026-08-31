class Solution(object):
    def longestPalindrome(self, s):
        sol =""
        for i in range(len(s)):
            r=""
            for j in range(i,len(s)):
                r+=s[j]
                if ( r==r[::-1] and len(r)>len(sol)):
                    sol=r
        return sol