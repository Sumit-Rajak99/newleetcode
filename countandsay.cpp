
class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        
        string result = "1";
        
        for (int i = 2; i <= n; ++i) {
            string current = "";
            int count = 1;
            char prev = result[0];

            for (int j = 1; j < result.size(); ++j) {
                if (result[j] == prev) {
                    count++;
                } else {
                    current += to_string(count) + prev;
                    count = 1;
                    prev = result[j];
                }
            }

            current += to_string(count) + prev;
            result = current;
        }

        return result;
    }
};
