class Solution {
public:
    string reverseWords(string s) {

        stringstream ss(s); // it reads until space
        string token = "";
        string result = "";

        while ( ss >> token ){ // providing input to token.

            result = token + " " + result;

        }
        result=result.substr(0,result.length()-1); // removing empty space of last position.

        return result;
        
    }
};