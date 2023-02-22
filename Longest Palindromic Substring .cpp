string Solution::longestPalindrome(string A)
{
    string s=A;
    int n=s.size();
    if(n<2) return s;
    int maxLen=1, start=0;
    int low,high;
    for(int i=0;i<n;i++)
    {

            low=i-1;

            high=i+1;

        

            while(high<n && s[high]==s[i]) high++;

            while(low>=0 && s[low]==s[i]) low--;

            

            while(low>=0 && high<n && s[low]==s[high]){ high++; low--;}

            

            int len=high-low-1;

            if(maxLen < len){

                maxLen=len;

                start=low+1;

            }

        }

        return s.substr(start,maxLen);
}
