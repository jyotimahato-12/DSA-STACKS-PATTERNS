

//KEEP ADDING CHARACTERS OF STRING INTO STACK UNTILL U FIND SPACE
//WHEN U FOUND SPACE THEN STORE THE ELEMENTS OF STACK IN A STRING UNTILL STACK BECOMES EMPTY



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
        if(!st.empty())//THIS part IS BECAUSE LETS SUPPOSE 
                       //"MY NAME" SO AFTER STORING ALL CHARACTERS OF NAME WE DONT HAVE SPACE
                       //SO else if part of for loop will not get executed
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