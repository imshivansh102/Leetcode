class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int size = s.length();
        int ans = -1;

        for( int i=0; i<size; i++){
            for( int j=i+1; j<size; j++){
                if(s[i] == s[j]){
                   ans = max( ans , j-i-1 );
                }
            }
        }
        return ans;
        
    }
};