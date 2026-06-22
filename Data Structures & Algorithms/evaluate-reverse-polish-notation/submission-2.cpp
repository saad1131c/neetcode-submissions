class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        unordered_set<string> us;
        us.insert("+");
        us.insert("-");
        us.insert("*");
        us.insert("/");
        int result;
        if(tokens.size() == 1) return stoi(tokens[0]);
        for(int i = 0; i < tokens.size(); i++){
            if(us.count(tokens[i]) == 0) st.push(tokens[i]);
            else{
                int num2 = stoi(st.top());
                st.pop();
                int num1 = stoi(st.top());
                st.pop();
                if(tokens[i] == "+") result = num1 + num2;
                else if(tokens[i] == "-") result = num1 - num2;
                else if(tokens[i] == "*") result = num1 * num2;
                else if(tokens[i] == "/") result = num1 / num2;
                st.push(to_string(result));
            }
        }
        return result;
    }
};
