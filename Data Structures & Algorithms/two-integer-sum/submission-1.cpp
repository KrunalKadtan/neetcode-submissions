class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;

        sort(nums.begin(), nums.end());

        int left = 0, right = nums.size() - 1;

        while (left < right) {
            if (nums[left] + nums[right] == target) {
                ans.push_back(left);
                ans.push_back(right);
                return ans;
            }

            if (nums[left] + nums[right] < target) left++;
            if (nums[left] + nums[right] > target) right--;
        }
    }
};
