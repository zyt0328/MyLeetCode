class MyQueue {
public:
    stack<int>s1;
    stack<int>s;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s.empty()){
            s1.push(s.top());
            s.pop();
        }
        s1.push(x);
        while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
    }
    
    int pop() {
        int f = s.top();
        s.pop();
        return f;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        if(s.empty()) return true;
        return false;
    }
};
