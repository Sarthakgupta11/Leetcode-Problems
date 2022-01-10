/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
using ll = long long int;

class Solution {
public:
    int pairSum(ListNode* head) {
        vector<ll>a;
        ListNode* h=head;
        while(h!=NULL)
        {
            a.push_back(h->val);
        h=h->next;
        }
        ll l=0;
        ll r=a.size()-1;
        ll ans=0;
        while(l<=r)
        ans=max(ans,a[l++]+a[r--]);
        
        return ans;       
        
    }
};