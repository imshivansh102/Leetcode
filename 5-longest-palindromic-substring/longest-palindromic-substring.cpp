class Solution {
public:

    bool checkPalindrome(string &s, int i, int j) {

        while(i <= j) {
            if(s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {

        int n = s.length();
        int maxlength = 0;
        int startingPoint = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {

                if(checkPalindrome(s, i, j)) {
                    if(j - i + 1 > maxlength) {
                        maxlength = j - i + 1;
                        startingPoint = i;
                    }
                }
            }
        }

        return s.substr(startingPoint, maxlength);
    }
};