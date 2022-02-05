class Solution {
public:
    int majorityElement(vector<int>& a) 
    {
        map<int,int>m;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        
        for(auto i : m)
        {
            if(i.second > n/2)
            return i.first;
        }

        return 0;
    }
};