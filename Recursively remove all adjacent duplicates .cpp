string rremove(string s)
    {
        // code here
        string ans;
        int i=0;
        while(s[i]!=NULL)
        {
            if(s[i]!=s[i+1] && s[i]!=s[i-1])
            {
                ans+=s[i];
            }
            i++;
        }
        if(ans.size()==s.size())
        {
            return ans;
        }
        return rremove(ans);
    }
