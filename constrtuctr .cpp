class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        
        for (int x : nums) {

            if ((x & 1) == 0) {
                ans.push_back(-1);
                continue;
            }
            
            
            int k = 0;
            int temp = x;
            while (temp & 1) {
                k++;
                temp >>= 1;
            }
            
           
            int res = x ^ (1 << (k - 1));
            ans.push_back(res);
        }
        
        return ans;
    }
};
