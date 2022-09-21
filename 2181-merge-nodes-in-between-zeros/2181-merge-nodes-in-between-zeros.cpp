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
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* temp1=head->next;
        ListNode* temp2=head;
        int sum=0;
        while(temp1!=NULL)
        {
            if(temp1->val==0)
            {
                temp2->val=sum;
                if(temp1->next==NULL)
                temp2->next=NULL;
                else
                temp2=temp2->next;
                //cout<<sum<<" ";
                sum=0;
                temp1=temp1->next;
            }
            else
            {
                sum+=temp1->val;
                temp1=temp1->next;
            }
        }
        
        return head;
    }
};