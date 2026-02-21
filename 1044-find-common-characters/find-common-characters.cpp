class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<string> result;
        
        string first = words[0];
        
        for(int i = 0; i < first.length(); i++){
            
            char ch = first[i];
            bool isCommon = true;
            
            for(int j = 1; j < words.size(); j++){
                
                size_t pos = words[j].find(ch);
                
                if(pos == string::npos){
                    isCommon = false;
                    break;
                } else {
                    words[j].erase(pos, 1);  // remove used character
                }
            }
            
            if(isCommon){
                result.push_back(string(1, ch));
            }
        }
        
        return result;
    }
};