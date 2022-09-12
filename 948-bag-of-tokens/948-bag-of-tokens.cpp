class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {
        int l=0;
        int r=tokens.size()-1;
        int ans=0;
        int cnt=tokens.size();
        sort(tokens.begin(),tokens.end());
        
        while(l<=r)
        {
            if(power>=tokens[l])
            {
                ans++;
                power-=tokens[l];
                l++;
                cnt--;
            }
            else
            {
                if(cnt==1)
                break;
                
                if(ans>=1)
                {
                ans--;
                power+=tokens[r];
                cnt--;
                }
                
                r--;
            }
        }
        
        return ans;        
    }
};