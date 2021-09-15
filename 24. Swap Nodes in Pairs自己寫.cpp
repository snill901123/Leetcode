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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* ans=new ListNode;
        ListNode* curr=ans;
        while(head and head->next){
            curr->next=head->next;
            curr=curr->next;
            head->next=head->next->next;
            curr->next=head;
            curr=curr->next;
            head=head->next;
        }
        return ans->next;
    }
};
