class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            set<int> seteven, setodd;

            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 0)
                    seteven.insert(nums[j]);
                else
                    setodd.insert(nums[j]);

                if (seteven.size() == setodd.size()) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
}; 
