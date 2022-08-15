class Solution {
public:
    int furthestBuilding(vector<int>& a, int bricks, int ladders) 
    {
        
        priority_queue<int>pq;
        int ans=0,i=0;
        
        for(i=0;i<a.size()-1;i++)
        {
            if(a[i+1]>a[i])
            {
            pq.push(a[i]-a[i+1]);
            
            if(pq.size()>ladders)
            {
                if(bricks+pq.top()>=0)
                {
                bricks+=pq.top();
                pq.pop();
                }
                else
                break;
            }
            }
        }          
        
        return i;   
    }
};