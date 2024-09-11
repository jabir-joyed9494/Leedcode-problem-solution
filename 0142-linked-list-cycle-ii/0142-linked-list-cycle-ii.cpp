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
        map<ListNode*,int>mp;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr)
        {
            if(mp[temp]!=0)
            {
                return temp;
            }
            cnt++;
            mp[temp]=cnt;
            temp=temp->next;
        }
        return nullptr;
    }
};