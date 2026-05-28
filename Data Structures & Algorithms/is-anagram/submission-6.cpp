class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t) return true;
        
        // set s_s(s.begin(), s.end());
        // set s_t(t.begin(), t.end());

        // if (s_s == s_t) return true;

        return false;
    }
};
