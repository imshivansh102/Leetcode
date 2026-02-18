class Solution {
public:

    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {

        int size=s.length();
        int i=0;
        int j=size-1;

        while(i<j){

            if( !isvowel(s[i])){ // s[i] is vowel.
                i++;
            }
            else if( !isvowel(s[j])){ // s[j] is vowel.
                j--;
            }
            else{ // both s[i] and s[j] are vowel.
                swap(s[i],s[j]);
                i++;
                j--;
            }

        }

        return s;
        
    }
};