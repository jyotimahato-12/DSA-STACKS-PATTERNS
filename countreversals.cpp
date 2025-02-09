int countRev (string s)
{
    int i=0;
    int c=0;
    stack<int>st;
    if(s.length()%2!=0)
      return -1;
   while(i<s.length())
   {
       if(s[i]=='}'&&st.empty())
      {
          c=c+1;
          
       }
       else if(s[i]=='{')
       {
         st.push(s[i]);
         
       }
       else if(s[i]=='}'&&!st.empty())
       {
            st.pop();
            
        } 
        i++;
   }
   int b=st.size();
   return((b+1)/2+(c+1)/2);
      
      
  
    
}