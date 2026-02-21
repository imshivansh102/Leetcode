class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        int n = s.length();
        vector<int> ans(n);
        
        for(int i = 0; i < n; i++){
            
            int minDist = n;  // maximum possible
            
            for(int j = 0; j < n; j++){
                
                if(s[j] == c){
                    minDist = min(minDist, abs(i - j));
                }
            }
            
            ans[i] = minDist;
        }
        
        return ans;
    }
};