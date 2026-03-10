class Solution {
public:

    void backtrack(string s, int index, int parts, string current, vector<string>& ans) {

        if(parts == 4 && index == s.size()) {
            current.pop_back(); 
            ans.push_back(current);
            return;
        }

        if(parts == 4 || index == s.size())
            return;

        for(int len = 1; len <= 3; len++) {

            if(index + len > s.size()) 
                break;

            string part = s.substr(index, len);

            if((part[0] == '0' && part.size() > 1) || stoi(part) > 255)
                continue;

            backtrack(s, index + len, parts + 1, current + part + ".", ans);
        }
    }

    vector<string> restoreIpAddresses(string s) {

        vector<string> ans;

        backtrack(s, 0, 0, "", ans);

        return ans;
    }
};