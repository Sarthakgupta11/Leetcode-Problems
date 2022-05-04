#define ll long long

class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) 
    {
        ll l=2;
        ll r= 1e18;
        ll ans;
        
        while(l<r)
        {
            ll mid=(l+r)/2;
            ll lcm=a*b/__gcd(a,b);
            ans=mid/a + mid/b - mid/lcm;
            
            if(ans<n)
                l=mid+1;
            else
            {
                r=mid;
            }
            
        }         
            return r%1000000007;       
    }
};