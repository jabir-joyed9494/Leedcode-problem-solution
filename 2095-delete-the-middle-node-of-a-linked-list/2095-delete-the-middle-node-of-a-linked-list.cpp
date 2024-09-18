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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int temp=0;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            temp=1;
        }
        if(temp==0)
        {
            head=nullptr;
            return head;
        }
        else if(slow->next==nullptr)
        {
          //  slow=head;
            head->next=nullptr;
            return head;
        }
        slow->val=slow->next->val;
        cout<<slow->val<<endl;
        fast=slow->next;
        slow->next=slow->next->next;
        delete(fast);
        return head;
    }
};