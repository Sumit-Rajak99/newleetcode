class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Minimum right side me hoga
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            }
            // Minimum left side me ya mid par ho sakta hai
            else {
                right = mid;
            }
        }

        return nums[left];
    }
};