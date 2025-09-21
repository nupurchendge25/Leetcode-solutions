class MinStack {
public:
        stack<int> st;
        stack<int> min;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(min.empty() || val<=min.top()){
            min.push(val);
        }
    }
    
    void pop() {
        if(st.empty()==false){
            if(st.top()==min.top()){
                min.pop();
            }
            st.pop();
        }
    }
    
    int top(){
        if(st.empty()==true){
            return -1 ;
        }
        return st.top();
    }
    
    int getMin() {
        if(st.empty()==true){
            return -1;
        }
         return min.top();
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