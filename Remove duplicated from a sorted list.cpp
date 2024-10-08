// leetcode  --->  https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        if(head->next==nullptr) return head;

        ListNode* temp=head;
        while(temp->next->next != nullptr)  {
            if(temp->val == temp->next->val) {
                temp->next = temp->next->next;
            }else{
                temp=temp->next;
            }
        }
        if(temp->val == temp->next->val)  {
            temp->next = nullptr;
        }
        return head;
    }
};
