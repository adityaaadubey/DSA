class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>temp;
        int l=0;
        int output=0;
        for(int i=0;i<s.size();i++)
        {
            while(temp.count(s[i]))
            {
                temp.erase(s[l]);
                l+=1;
            }
            temp.insert(s[i]);
            output=max(output,i-l+1);
        }
        return output;
    }
};