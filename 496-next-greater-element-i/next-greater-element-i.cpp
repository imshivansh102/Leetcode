class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack<int> st;
        unordered_map<int,int> mp;
        // finding next greater.
        for(int i = n - 1; i>=0; i--) {

            while(!st.empty() && nums2[i] >= st.top()) { // pop until found greater.
                st.pop();
            }

            if(st.empty()) { // empty.
                mp[nums2[i]] = -1;
            }
            else { // st.top > nums2[i].
                mp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        // finding element of nums1 in nums2.
        vector<int> ans;

        for(int i=0; i<nums1.size(); i++) {
            ans.push_back(mp[nums1[i]]);
        }
        
        return ans;

    }
};