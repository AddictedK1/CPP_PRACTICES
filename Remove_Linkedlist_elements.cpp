// leetcode ----->  https://leetcode.com/problems/remove-linked-list-elements/description/

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp;
    
        while(head!=nullptr && head->val == val)  {
            head=head->next;
        }
        temp=head;
    
        if(temp != nullptr) {  
            while(temp->next != nullptr)  {
                if(temp->next->val == val)  {
                    temp->next = temp->next->next;
                }else{
                    temp=temp->next;
                }
        }
    }

    return head; 
}
    
};
