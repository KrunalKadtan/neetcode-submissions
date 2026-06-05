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
                for (int j = 0; j < nums.size(); j++) {
                    if (i == j) {
                        continue;
                    } else {
                        prod *= nums[j];
                    }
                }
                ans[i] = prod;
            }
        }

        return ans;
    }
};
