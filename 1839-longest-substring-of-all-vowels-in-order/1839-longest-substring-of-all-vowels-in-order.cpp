class Solution {
public:
    int longestBeautifulSubstring(string word) 
    {
        int ans=0,cnt=1,diff=1;
        
        int n=word.size();
        
        
        for(int i=1;i<n;i++)
        {
            if(word[i]==word[i-1])
            {
                cnt++;                
            }
            else if(word[i]>word[i-1])
            {
                cnt++;
                diff++;
            }
            else
            {
                cnt=1;
                diff=1;
            }
            
            if(diff==5)
                ans=max(ans,cnt);
        }
     return ans;   
    }
};