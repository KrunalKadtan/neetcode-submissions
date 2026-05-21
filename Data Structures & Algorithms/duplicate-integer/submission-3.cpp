class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i+1; j < nums.size(); j++) {
        //         if (nums[i] == nums[j]) return true;
        //     }
        // }

        set<int> s(nums.begin(), nums.end());

        if (s.size() != nums.size()) return true;

        return false;
    }
};