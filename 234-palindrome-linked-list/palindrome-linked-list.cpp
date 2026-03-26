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

    ListNode* reverse(ListNode* head) { // finding reverse of Linked List.
        ListNode* prev = NULL;
        ListNode* curr = head;
        

        while(curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward; 
        }

        return prev;

    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL) {
            return true;
        }
        if(head->next == NULL) {
            return true;
        }
        // Slow and fast approach. we find middle of LL.
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        // Now slow is at middle.
        ListNode* NewHead = reverse(slow->next);

        slow->next = NewHead;
        // Now compare both LL left side and right side.
        ListNode* temp1 = head;
        ListNode* temp2 = NewHead;

        while(temp2 != NULL) {
            if(temp1->val != temp2->val) {
                return false;
            }
            else { // Move forward. if data is equal. check new element.
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }

        return true;

    }
};