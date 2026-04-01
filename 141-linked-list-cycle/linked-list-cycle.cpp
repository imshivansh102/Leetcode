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
    bool hasCycle(ListNode *head) {


        // Optimal Approach: Floyd’s Cycle Detection (Tortoise & Hare).
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next; // Moving 2 steps.
            slow = slow->next; // Moving 1 step.
            if(slow == fast) {
               return true;
            }
        }
        
        return false;
        
    }
};