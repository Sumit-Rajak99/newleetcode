class Solution {
public:
    bool hasAllCodes(string s, int k) {
    unordered_set<string> codes;
    int n = s.size();

    
    for (int i = 0; i <= n - k; i++) {
        string sub = s.substr(i, k);
        codes.insert(sub); 
    }

    
    return codes.size() == (1 << k); 
}
};