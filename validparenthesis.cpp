
class Solution
{
public:
    bool isValid(string s) {
        stack<int>st;
        unordered_map<char,char>match={{'(',')'},{'[',']'},{'{','}'}};

        for(int i=0;i<s.length();i++)
        {
            if((s[i]=='[')||(s[i]=='(')||(s[i]=='{'))
             st.push(s[i]);
            else
              if(st.empty()||s[i]!=match[st.top()])
                return 0;
              else if(!st.empty()&&s[i]==match[st.top()])
                st.pop();
        }
        if(st.empty())
          return 1;
       return 0;  
    }
};
        
