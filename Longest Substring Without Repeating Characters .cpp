class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int maxlen=0;
        int l=0,r=0;
        int c[256]={0};
        while(r<s.length())
        {
            c[s[r]]++;
            while(c[s[r]]>1)
            {
                c[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
