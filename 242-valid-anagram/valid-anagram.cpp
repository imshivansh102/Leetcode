class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26,0);

        for(char &ch : s){ // frequency count.
            count[ch-'a']++;
        }

        for(char &ch : t){ // decreasing frequency count.
            count[ch-'a']--;
        }
        // check if all elements in count is 0 or not.

        for(int i=0; i<count.size(); i++){
            if( count[i] != 0 ) {
                return false;
            }
        }

        return true;
        
    }
};