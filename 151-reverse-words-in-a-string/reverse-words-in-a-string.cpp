class Solution {
public:
    string reverseWords(string s) {

        stringstream ss(s);   // it reads until space.
        string word = "";
        string answer = "";

        while ( ss >> word ) {  //providing input to word.

            answer = word + " " + answer;

        }
        answer = answer.substr( 0, answer.length() - 1 ); //removing last extra space

        return answer;
        
    }
};