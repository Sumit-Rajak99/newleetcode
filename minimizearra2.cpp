class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int n : nums) {
            if (n % 2 == 0) {
                ans.push_back(-1);
                continue;
            }

            int temp = n;
            int t = 0;

            while (temp & 1) {   // count trailing 1s
                t++;
                temp >>= 1;
            }

            ans.push_back(n - (1 << (t - 1)));
        }

        return ans;
    }
};
