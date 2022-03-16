class MyStack {
public:
    
    queue<int> q1 ; // primary   queue 
    queue<int> q2 ; // secondary queue 
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x) ;   // push to one queue 
    }
    
    int pop() {
        int res = -1 ;
        while( q1.size() > 1  ){    // shift from one to second 
            q2.push(q1.front()) ;
            q1.pop() ;
        }
        res = q1.front() ;       
        q1.pop() ;
        while( !q2.empty() ){
            q1.push(q2.front()) ;
            q2.pop() ;
        }
        return res ;
    }
    
    int top() {
        
        return q1.back() ;
        
    }
    
    bool empty() {
        return q1.empty() ;
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
