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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        // Step 1: Convert LL → array
        while(head != NULL) {
            v.push_back(head -> val);
            head = head -> next;
        }
        int n = v.size();
        stack<int> st; // stores indices
        vector<int> ans(n,0);
        // Step 2: Next Greater Element logic
        for(int i=0; i<n; i++) {
            while(!st.empty() && v[st.top()] < v[i]) {
                ans[st.top()] = v[i];
                st.pop();
            }
            st.push(i);
        }

        return ans;
        
    }
};