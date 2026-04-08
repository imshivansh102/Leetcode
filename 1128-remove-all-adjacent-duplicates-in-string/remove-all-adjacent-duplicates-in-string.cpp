class Solution {
public:
    string removeDuplicates(string s) {
        int size=s.length();
        string ans=""; // we have to make empty string.
       
        for(int i=0; i<size; i++){

            if( ans.length() > 0 ){ 
               if( ans[ans.length()-1] == s[i] ){
                 ans.pop_back();
               }
               else {
                 ans.push_back(s[i]);
               } 
            }
            else {
                 ans.push_back(s[i]);
            }
        }
        return ans;
        
    }
};