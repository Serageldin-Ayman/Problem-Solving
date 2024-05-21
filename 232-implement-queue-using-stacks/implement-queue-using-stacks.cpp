class MyQueue {
    std::stack<int> stack1;
    std::stack<int> stack2;
public:
    MyQueue() {
        
    }
    
    void push(int x) 
    {
        stack1.push(x);
    }
    
    int pop() 
    {
        int poppedval{0};
        if(empty())
            return INT_MIN;
        else if(stack2.empty() && !stack1.empty())
        {    
            while(!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
            poppedval=stack2.top();
            stack2.pop();
            return poppedval;
        }
        else
        {
            poppedval = stack2.top();
            stack2.pop();
            return poppedval;
        }   
    }
    
    int peek() 
    {
       if(empty())
       {
            return INT_MIN;
       }
       
       else if(stack2.empty())
        {
            while(!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
            return stack2.top();
        }
        else
        {
            return stack2.top();
        }
    }
    
    bool empty() {
        return stack1.empty() && stack2.empty();
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