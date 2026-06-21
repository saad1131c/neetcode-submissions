class Solution {
public:
    string changestr(string s){
        string ans;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                ans += s[i];
            }
            else if(s[i] >= 'A' && s[i] <= 'Z'){
                ans += tolower(s[i]);
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                ans += s[i];
            }
        }
        return ans;
    }
    bool isPalindrome(string s) {
        string s1 = changestr(s);
        for(int i = 0; i < s1.size()/2;i++)
        {
            if(s1[i] != s1[s1.size()-1-i]) return false;
        }
        return true;
    }
};
