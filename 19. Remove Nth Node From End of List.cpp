class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* ans=head;
        while(n--){
            temp=temp->next;
        }
        if(temp==NULL) return head->next;
        while(temp->next){
            temp=temp->next;
            ans=ans->next;
        }
        ans->next=ans->next->next;
        return head;
    }
};
