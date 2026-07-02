class Solution {
public:
    static bool compare(int x, int y) {
        string a = to_string(x);
        string b = to_string(y);
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);

        
        if (nums[0] == 0) {
            return "0";
        }

        string result = "";
        for (int num : nums) {
            result += to_string(num);
        }

        return result;
    }
};
