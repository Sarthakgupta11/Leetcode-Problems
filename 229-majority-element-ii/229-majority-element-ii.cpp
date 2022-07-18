class Solution {
public:
    vector<int> majorityElement(vector<int>& a) 
    {
        vector<int>ans;
        
        if(a.size()==1)
        {
            ans.push_back(a[0]);
            return ans;
        }
        
        int num1=a[0],cnt1=0;
        int num2=a[1],cnt2=0;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==num1)
                cnt1++;
            else if(a[i]==num2)
                cnt2++;
            else if(cnt1==0)
            {
                num1=a[i];
                cnt1++;
            }
            else if(cnt2==0)
            {
                num2=a[i];
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            } 
        }
        cnt1=0;
        cnt2=0;
        for(int i:a)
        {
            if(i==num1)
                cnt1++;
            else if(i==num2)
                cnt2++;
        }
            
        
        if(cnt1>a.size()/3)
            ans.push_back(num1);
        if(cnt2>a.size()/3)
            ans.push_back(num2);
        
        return ans;       
        
    }
};