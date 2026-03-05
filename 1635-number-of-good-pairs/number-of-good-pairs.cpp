class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> m;

        for(int &i : nums){ // frequency counting.
            m[i]++;
        }
        int result = 0;

        for(auto &it : m){
            int count = it.second;
            result = result + (count * (count-1))/2;
        }

        return result;
        
    }
};