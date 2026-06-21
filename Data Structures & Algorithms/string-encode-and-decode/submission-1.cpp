class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(auto x:strs){
            s += x + "`";
        }
        return s;
    }

    vector<string> decode(string s) {
    string y = "";
    vector<string> ans;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '`') {
//            if (i != s.size() - 1) {
            ans.push_back(y);
            y = "";
//            }
        } else {
            y += s[i];
        }
    }
    return ans;
}
};
