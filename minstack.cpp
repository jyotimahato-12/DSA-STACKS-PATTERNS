class MinStack {
public:
   stack<long long int>s;
      long long int x;
      long long int minele;
    MinStack() {

        
    }
    
    void push(int val) {
        if(s.empty())
        {
          s.push(val);
          minele=val;
        }
        else if(val>=minele)
          s.push(val);
        else
        {
            
          x=2LL*val-minele;
          s.push(x); 
          minele=val; 
        }
        
    }
    
    void pop() {
        if(!s.empty())
        {
          if((1LL*s.top())<minele)
         {
          minele=(2LL*minele)-(1LL*s.top());
          s.pop();
         }
         else
          s.pop();
          
        }
        
    }
    
    int top() {
        if(!s.empty())
        {
           long long topVal=1LL*s.top();
           if(topVal<minele)
              return (int)minele;
           else
             return(int)topVal;   
        }
        return -1;  

        
    }
    
    int getMin() {
        if(!s.empty())
          return (int)minele;
        return -1;  
        
    }
};
