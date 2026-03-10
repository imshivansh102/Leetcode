class Solution {
public:
    int firstUniqChar(string s) {

        vector<int> freq(26,0);
        // first find frequency of all elements in s.
        for(int i=0; i<s.length(); i++){
            freq[s[i]-'a']++;
        }
        // now match frequency of each elements to 1.
        for(int i=0; i<s.length(); i++){
            if(freq[s[i]-'a'] == 1){
                return i;
            }
        }

        return -1;
        
    }
};