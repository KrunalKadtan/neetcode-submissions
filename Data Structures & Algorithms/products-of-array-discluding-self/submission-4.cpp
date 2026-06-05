class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int prod = 1;

        for(int n : nums) {
            prod *= n;
        }

        vector<int> ans(nums.size(), prod);

        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                ans[i] /= nums[i];
            } else {
                prod = 1;
                int count = 0;
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] == 0) {
                        count++;
                        continue;
                    } else {
                        prod *= nums[j];
                    }
                }
                if (count == nums.size()) {
                    ans[i] = 0;
                } else {
                    ans[i] = prod;
                }
            }
        }

        return ans;
    }
};
