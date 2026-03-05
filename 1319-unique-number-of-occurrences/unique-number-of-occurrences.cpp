class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        // count frequency of each number.
        for(int &x : arr) {
            mp[x]++;
        }

        unordered_set<int> st;

        for(auto &it : mp) { // store all values of mp in set.
            int freq = it.second; // it.first = number

            if(st.find(freq) != st.end()){
                return false;
            }
        
            st.insert(freq);
        }

        return true;
    }
};