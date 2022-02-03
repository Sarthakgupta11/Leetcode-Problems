class Solution {
public:
    string strWithout3a3b(int a, int b)
    {
        string ans="";
        
        int ca=0,cb=0;
        
        while(a || b)
        {
            if((ca<2 && a>=b) || (cb==2 && b>=a))
            {
                ans.push_back('a');
                ca++;
                cb=0;
                a--;
            }
            else
            {
                ans.push_back('b');
                cb++;
                ca=0;
                b--;
            }
        }
            
        return ans;        
    }
};