//User function Template for C++
void addatbottom(stack<int>&St,int element)
{
    if(St.empty())
    {
      St.push(element);//ADD ELEMENT WHICH U WANT TO INSERT AT LAST
      return;
    }
    int elem=St.top();
    St.pop();
    
    addatbottom(St,element);
    St.push(elem);//FOR RECURSIVELY ADDING THE POPPED OUT ELEMENTS
    
    
    
}




class Solution{
public:
    void Reverse(stack<int> &St){
        int element;
        if(St.empty())
          return;
        
        
        element=St.top();
        St.pop();
        Reverse(St);
        addatbottom(St,element);
        
          
        
    }
};