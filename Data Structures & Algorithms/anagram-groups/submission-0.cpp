class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> dup_strs;

        for(string str : strs) {
            string s = str;
            sort(s.begin(), s.end());
            dup_strs.push_back(s);
        }

        vector<vector<string>> ans;

        while(dup_strs.size()) {
            vector<string> s;
            vector<int> index;
            for(int j = 0; j < dup_strs.size(); j++) {
                if (dup_strs[0] == dup_strs[j]) {
                    s.push_back(strs[j]);
                    index.insert(index.begin(), j);
                }
            }
            for(int j : index) {
                dup_strs.erase(dup_strs.begin() + j);
                strs.erase(strs.begin() + j);
            }
            ans.insert(ans.begin(), s);
            s.clear();
        }

        return ans;
    }
};
