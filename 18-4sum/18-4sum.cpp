class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int k) 
    {
        vector<vector<int>>ans;
        
        if(a.empty())
            return ans;
        
        sort(a.begin(),a.end());
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
                long long int z = (long long)k - (long long)a[i] - (long long)a[j];
                
                int front=j+1;
                int back=n-1;
                
                while(front<back)
                {
                    if((long long)a[front]+a[back]<z)
                        front++;
                    else if((long long)a[front]+a[back]>z)
                        back--;
                    else
                    {
                        vector<int>an;
                        an.push_back(a[i]);
                        an.push_back(a[j]);
                        an.push_back(a[front]);
                        an.push_back(a[back]);   
                        ans.push_back(an);
                        
                        cout<<i<<" "<<j<<" "<<front<<" "<<back;
                        
                        while(front<back && a[front]==an[2])
                            front++;
                        
                        while(front<back && a[back]==an[3])
                            back--;
                    }
                }
                while(j+1<n && a[j+1]==a[j])
                    j++;
            }
            while(i+1<n && a[i+1]==a[i])
                i++;
        }
        
        return ans;
    }
};