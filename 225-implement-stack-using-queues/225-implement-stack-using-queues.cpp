class MyStack {
public:
    
    queue<int>q;
    int t=-1;
    
    MyStack() 
    {
    }
    
    void push(int x) {
        t=x;
        q.push(x);
    }
    
    int pop() 
    {
        int n=q.size()-1;
        
        while(n--)
        {
            t=q.front();
            q.push(t);
            q.pop();
        }
        int ans=q.front();
        q.pop();
        return ans;     
    }
    
    int top() {
        return t;
        
    }
    
    bool empty() {
        return q.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */