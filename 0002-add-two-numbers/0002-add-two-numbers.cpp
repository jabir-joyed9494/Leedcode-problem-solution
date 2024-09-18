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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* node=new ListNode(-1);
        ListNode* dummy=node;
        int sum=0,carry=0;
        while(l1!=nullptr && l2!=nullptr)
        {
            sum=(l1->val+l2->val);
            sum+=carry;
           // cout<<"sum=="<<sum<<endl;
            ListNode* temp=new ListNode(sum%10);
           // cout<<"temp="<<temp->val<<endl;
            dummy->next=temp;
            dummy=dummy->next;
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr)
        {
            sum=carry+l1->val;
            ListNode* temp=new ListNode(sum%10);
             dummy->next=temp;
            dummy=dummy->next;
            carry=sum/10;
            l1=l1->next;
        }
           while(l2!=nullptr)
        {
            sum=carry+l2->val;
            ListNode* temp=new ListNode(sum%10);
                dummy->next=temp;
            dummy=dummy->next;
            carry=sum/10;
               l2=l2->next;
        }
       if(carry>0){ 
           sum=carry;
        ListNode* temp=new ListNode(sum%10);
                dummy->next=temp;
            dummy=dummy->next;
       }
        return node->next;
        
        
    }
};