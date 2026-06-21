class MinStack {
    vector<int> v;
public:
    MinStack() {
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        int minimum = INT_MAX;
        for(int i = 0; i < v.size(); i++)
            minimum = min(minimum,v[i]);
        return minimum;
    }
};
