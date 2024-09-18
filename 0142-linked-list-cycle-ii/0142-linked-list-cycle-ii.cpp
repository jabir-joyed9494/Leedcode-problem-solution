/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
      ListNode* slow=head;
        ListNode* fast=head;
        int temp=0;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) 
            {
                temp=1;
                break;
            }
        }
        if(temp==0) return NULL;
        else
        {
            ListNode* temp=head;
            while(temp!=slow)
            {
                temp=temp->next;
                slow=slow->next;
            }
            return temp;
        }
    }
};