int maxSubStr(string str)
    {
        //Write your code here
        int z=0,o=0,c=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
                z++;
            }
            else if(str[i]=='1')
            {
                o++;
            }
            if(z==o)
            {
                c++;
            }
        }
        if(z!=o)
        {
            return -1;
        }
        return c;
    }
