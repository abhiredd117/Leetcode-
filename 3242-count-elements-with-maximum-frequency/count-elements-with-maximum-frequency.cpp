class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int mx = -1;
        for(int idx = 0; idx < nums.size(); idx++) {
            mp[nums[idx]]++;
            mx = max(mx, mp[nums[idx]]);
        }
        int count = 0;
        for(auto &data:mp) {
            if(data.second == mx)
                count++;
        }
        return count * mx;
    }
};