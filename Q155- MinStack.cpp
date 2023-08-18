class MinStack {
  private:
     stack<int>st;
     stack<int>mi;

public:
    
    void push(int val) {
        st.push(val);
        if(!mi.empty())
        {
            mi.push(min(val,mi.top()));
        }
        else
        {
             mi.push(val);
        }  
    }
    
    
    void pop() {
        st.pop();
        mi.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mi.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
