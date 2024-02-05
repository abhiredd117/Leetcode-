class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x,y;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if (nums[i]+ nums[j] == target){
                    //break;
                    x = i;
                    y = j;

                }
            }
        }
        return vector<int> {x , y};
    }
};