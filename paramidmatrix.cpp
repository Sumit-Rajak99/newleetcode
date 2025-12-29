class Solution {
public:
    unordered_map<string, vector<char>> mp;
    unordered_map<string, bool> memo;

    bool dfs(string curr) {
        // Base case
        if (curr.size() == 1) return true;

        // Memo check
        if (memo.count(curr)) return memo[curr];

        int n = curr.size();
        vector<string> nextRows;
        string temp;

        // Generate all possible next rows
        function<void(int)> build = [&](int idx) {
            if (idx == n - 1) {
                nextRows.push_back(temp);
                return;
            }

            string key = curr.substr(idx, 2);
            if (!mp.count(key)) return;

            for (char c : mp[key]) {
                temp.push_back(c);
                build(idx + 1);
                temp.pop_back();
            }
        };

        build(0);

        // Try all possible next rows
        for (string &next : nextRows) {
            if (dfs(next)) {
                return memo[curr] = true;
            }
        }

        return memo[curr] = false;
    }

    bool pyramidTransition(string bottom, vector<string>& allowed) {
        for (string &s : allowed) {
            mp[s.substr(0, 2)].push_back(s[2]);
        }
        return dfs(bottom);
    }
};
