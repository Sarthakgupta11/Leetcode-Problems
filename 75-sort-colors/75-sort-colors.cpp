using ll = long long;
class Solution {
public:
    void sortColors(vector<int>& a) 
    {
        ll red=0;
        ll white=0;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==0)
                red++;
            if(a[i]<2 )
                white++;
        }
        
        for(int i=0;i<a.size();i++)
        {
            if(i<red)
                a[i]=0;
            else if(i<white)
                a[i]=1;
            else
                a[i]=2;
        }
        
        return;
    }
};