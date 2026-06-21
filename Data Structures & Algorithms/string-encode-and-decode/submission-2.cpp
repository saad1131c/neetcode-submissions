class Solution {
public:

    string encode(vector<string>& strs) {
       string s = "";
       for(auto x : strs){
        s = s + to_string(x.size()) + "x" + x;
       }
       return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'x'){
                int size = stoi(s.substr(j,i-j));
                string ans = s.substr(i+1,size);
                v.push_back(ans);
                j = i + size + 1;
                i = i + size; 
            }
        }
        return v;
    }
};
