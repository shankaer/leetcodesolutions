class MyQueue {
public:
    stack<int> s1 ;
    stack<int> s2 ;
    MyQueue() {
        
    }
    
    void push(int x) {
        
        s1.push(x);                 //push it to primary stack 
    }
    
    int pop() {
        while( !s1.empty() ){      // shifting all elements in auxillary stack to get the top element 
            s2.push(s1.top()) ;
            s1.pop() ;
        }
        int res = s2.top() ;
        s2.pop() ;                // pop 
        while( !s2.empty() ){     // shifting them back 
            s1.push(s2.top()) ;
            s2.pop() ;
        }
        return res ;
        
        
    }
    
    int peek() {
        while( !s1.empty() ){
            s2.push(s1.top()) ;
            s1.pop() ;
        }
        int res = s2.top() ;
        while( !s2.empty() ){
            s1.push(s2.top()) ;
            s2.pop() ;
        }
        return res ;
        
    }
    
    bool empty() {
        return s1.empty() ;    // check primary stack 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
