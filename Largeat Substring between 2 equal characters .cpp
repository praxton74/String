class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        map<char,int>mp;
        int maxi=-1;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=i;
            }
            else
            {
                if((i-mp[s[i]]-1)>maxi)
                {
                    maxi=i-mp[s[i]]-1;
                }
            }
        }
        return maxi;      
    }
};
