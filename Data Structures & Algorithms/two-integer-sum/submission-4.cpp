class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> num;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            if(!num.count(target - nums[i])) {
                num[nums[i]] = i;
            } else {
                res = {i, num[target-nums[i]]};
                break;
            }
        }

        return res;
    }
};
