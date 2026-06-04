class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";

        for(string s : strs) {
            str += s;
            str += "krunal"; 
        }

        return str;
    }

    vector<string> decode(string s) {
        vector<string> strs;

        string str = "";

        for (int i = 0; i < s.size(); i++) {
            if(s[i] == 'k' && s[i+1] == 'r' && s[i+2] == 'u' && s[i+3] == 'n' && s[i+4] == 'a' && s[i+5] == 'l') {
                strs.push_back(str);
                i += 5;
                str = "";
            } else {
                str += s[i];
            }
        }

        return strs;
    }
};
