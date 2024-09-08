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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr)
        {
            cnt++;
            temp=temp->next;
        }
        cnt=cnt-n+1;
        temp=head;
         if(cnt==1)
        {
            head=temp->next;
            delete(temp);
            return head;
        }
       // cout<<"cnt=="<<cnt<<endl;
        ListNode* prev=nullptr;int cnt1=0;
        while(temp!=nullptr)
        {
            cnt1++;  //cout<<"cnt1=="<<cnt1<<endl;
            if(cnt1==cnt)
            {
              
                  prev->next=temp->next;
                  delete(temp);
                  break;
            }
             prev=temp;
            temp=temp->next;
        }
        return head;
    }
};