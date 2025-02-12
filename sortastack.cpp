

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/
void so(stack<int>&s,int element)
{
    if(s.empty())
    {
       s.push(element);
       return;
    }
    else if(s.top()>element)
    {
       int ele=s.top();
       s.pop();
       so(s,element);
       s.push(ele);
       
    }
    else
    {
      s.push(element);
      return;
    }
      
}
/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   if(s.empty())
    return;
   int element=s.top();
   s.pop();
   sort();
   so(s,element);
}