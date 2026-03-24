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
    int findLength(ListNode* &head) { // For finding length of LL.
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            temp = temp -> next;;
            len++;
        }
        return len;

    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        // Base case.
        if(head == NULL) {
            return NULL;
        }
        int length = findLength(head);
        if(k > length) { // Enter the valid value for k.
            return head;
        }
        // reverse K nodes.
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward =curr->next;
        int count = 0;

        while(count < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        // recursive call.
        if(forward != NULL) { //  for the rest of nodes.
            head->next = reverseKGroup(forward, k);
        }
        // return the head of new LL.
        return prev;
        
    }
};