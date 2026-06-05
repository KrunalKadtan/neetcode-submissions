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
                prod = 2;
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] == 0) {
                        continue;
                    } else {
                        prod *= nums[j];
                    }
                }
                // if (prod == 2) {
                    ans[i] = prod/2;
                // } else {
                //     ans[i] = prod;
                // }
            }
        }

        return ans;
    }
};
