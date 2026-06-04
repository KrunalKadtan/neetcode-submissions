class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> freq;
        int count = 1;

        for(int i = 0; i < nums.size()-1; i++) {
            if (nums[i] == nums[i+1]) {
                count++;
            } else {
                freq.push_back({nums[i], count});
                count = 1;
            }
        }

        freq.push_back({nums.back(), count});

        if(freq.size() == 1) return {freq[0][0]};

        int col_index = 1;

        sort(freq.begin(), freq.end(), [col_index](const vector<int>& a, const vector<int>& b) {
            return a[col_index] > b[col_index];
        });

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i][0]);
        }

        return ans;
    }
};
