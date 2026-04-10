class Solution {
public:

    vector<int> prevSmaller(vector<int> &v) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(v.size());

        for (int i = 0; i < v.size(); i++) {
            int current = v[i];

            // pop until smaller element found
            while (st.top() != -1 && v[st.top()] >= current) {
                st.pop();
            }

            // store answer
            ans[i] = st.top();

            // push current index
            st.push(i);
        }
        return ans;
    }

    vector<int> nextSmaller(vector<int> &v) {
        stack<int> st;
        st.push(-1);
        vector<int> ans(v.size());

        for (int i = v.size() - 1; i >= 0; i--) {
            int current = v[i];

            // pop until smaller element found
            while (st.top() != -1 && v[st.top()] >= current) {
                st.pop();
            }

            // store answer
            ans[i] = st.top();

            // push current index
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> prev = prevSmaller(heights);
        vector<int> next = nextSmaller(heights);

        int n = heights.size();
        int maxArea = 0;   // better than INT_MIN

        for (int i = 0; i < n; i++) {
            int length = heights[i];

            // if no smaller on right
            if (next[i] == -1) {
                next[i] = n;
            }

            int width = next[i] - prev[i] - 1;
            int area = length * width;

            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};