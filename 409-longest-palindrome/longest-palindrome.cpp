class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;

        // Count frequency of each character
        for(char ch : s) {
            freq[ch]++;
        }

        int length = 0;
        bool hasOdd = false;

        for(auto it : freq) {
            int count = it.second;

            // If even, take all
            if(count % 2 == 0) {
                length += count;
            }
            else {
                // If odd, take count - 1
                length += count - 1;
                hasOdd = true;
            }
        }

        // Add one odd character in center if exists
        if(hasOdd) {
            length += 1;
        }

        return length;
        
    }
};