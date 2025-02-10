
class Solution {
  public:
    // Function to reverse words in a given string.
    // Use a stack to reverse words and handle spaces.
    string reverseWords(string &s) {
        stack<char>st;
        string str;
        for(char ch:s)
        {
            if(ch!=' ')
            {
                st.push(ch);
            }
            else if(ch==' '&&!st.empty())
            
            {
              while(!st.empty())
            {
                str+=st.top();
                st.pop();
                
            }
              str+=" ";
            }
            
        }
        if(!st.empty())
        {
         while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
         str+=" ";
        }
        str.pop_back();
        
        return str;
    }