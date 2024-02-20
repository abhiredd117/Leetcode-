class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());  
        int n = nums.size();
        if (nums[0] != 0) return 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1] - 1) {
                n = nums[i] + 1;
                break;
            }
        }
        return (n == -1) ? nums.size() : n;
    }
};