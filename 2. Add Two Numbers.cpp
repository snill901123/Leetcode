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
        int sum=0;
        int carry=0;
        ListNode *head = new ListNode;
        ListNode *temp=head;
        while(l1||l2||carry){
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            ListNode *newNode = new ListNode(sum%10);
            temp->next=newNode;
            temp=newNode;
            carry=(sum)/10;
            sum=0;
        }
        return head->next;
    }
};
