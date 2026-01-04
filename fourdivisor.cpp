class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for (int k = 0; k < nums.size(); k++) {
            int num = nums[k];
            int count = 0;
            int sum = 0;

            for (int i = 1; i * i <= num; i++) {
                if (num % i == 0) {
                    count++;
                    sum += i;

                    if (i != num / i) {
                        count++;
                        sum += num / i;
                    }
                }
            }

            if (count == 4) {
                ans += sum;
            }
        }
        return ans;
    }
};
