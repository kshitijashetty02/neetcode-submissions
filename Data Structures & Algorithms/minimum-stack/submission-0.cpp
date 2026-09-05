class MinStack {
public: stack <int> stk,mini;
    MinStack() {
        
    }
    
    void push(int val) {
       stk.push(val);
       int current =mini.empty() ? val:min(val,mini.top());
              mini.push(current);
        
    }
    
    void pop() {
       stk.pop() ;
       mini.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
