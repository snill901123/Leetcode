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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans=new ListNode;
        ListNode* temp=ans;
        vector<int>nums;
        for(ListNode* node:lists){
            while(node){
                nums.push_back(node->val);
                node=node->next;
            }
        }
        sort(nums.begin(),nums.end());
        for(int number:nums){
            temp->next=new ListNode(number);
            temp=temp->next;
        }
        return ans->next;
    }
};
