class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size(), x = 0;
        sort(nums.begin(), nums.end());
        while (x < n-1){
            if (nums[x] == nums[x+1]){
                return true;
            }
            x++;
        }
        
        return false;
    }
};