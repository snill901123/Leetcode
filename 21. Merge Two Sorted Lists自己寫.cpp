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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 and !l2){
            return NULL;
        }else if(!l1 and l2){
            return l2;
        }else if(l1 and !l2){
            return l1;
        }
        ListNode* head=new ListNode;
        ListNode* temp;
        if(l1->val<=l2->val){
            temp=new ListNode(l1->val);
            head->next=temp;
            l1=l1->next;
        }else{
            temp=new ListNode(l2->val);
            head->next=temp;
            l2=l2->next;
        }
        while(l1 or l2){
            if(!l1 and l2){
                temp->next=l2;
                break;
            }else if(l1 and !l2){
                temp->next=l1;
                break;
            }else if(l1->val<=l2->val){
                temp->next=new ListNode(l1->val);
                temp=temp->next;
                l1=l1->next;
            }else{
                temp->next=new ListNode(l2->val);
                temp=temp->next;
                l2=l2->next;
            }
        }
        return head->next;
    }
};
