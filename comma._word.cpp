class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
        
        
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        
        unordered_map<string, int> count;
        string word = "";
        
        
        for (int i = 0; i < paragraph.size(); i++) {
            
            if (isalpha(paragraph[i])) {
                word += paragraph[i];  
            } else {
                
                if (word != "" && bannedSet.find(word) == bannedSet.end()) {
                    count[word]++;
                }
                word = "";
            }
        }
        
        
        if (word != "" && bannedSet.find(word) == bannedSet.end()) {
            count[word]++;
        }
        
        
        string result;
        int maxFreq = 0;
        
        for (auto &it : count) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                result = it.first;
            }
        }
        
        return result;
    }
};