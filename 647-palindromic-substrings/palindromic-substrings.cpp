class Solution {
public:

    bool isPalindrome(string str) {

        int i = 0;
        int j = str.length() - 1;

        while (i <= j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
        
    }

    int countSubstrings(string text) {
        int n = text.length();
        int total = 0;
        
        for (int i = 0; i<n; i++) {  

            string current = "";

            for (int j = i; j < n; j++) {

                current += text[j];

                if ( isPalindrome(current) ) {
                    total++;
                }
            }
        }
        return total;
    }
};