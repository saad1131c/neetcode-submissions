class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mp;
        mp['}'] = '{';
        mp[')'] = '(';
        mp[']'] = '[';
        for(char c: s){
            if(mp.count(c) == 0){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                else if(st.top() != mp[c]) return false;
                else st.pop();
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
