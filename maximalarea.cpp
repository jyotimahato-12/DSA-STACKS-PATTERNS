int maximal(vector<int>vec,int max)
{
     long long int area;
    stack<int>st;
    vector<int>vec1(vec.size());
    for(int i=0;i<vec.size();i++)
    {
      while(!st.empty()&&vec[st.top()]>=vec[i])
     {
        area= vec[st.top()]*((i-vec1[st.top()]-1));
        if(area>max)
          max=area;
       st.pop();   
      }
      vec1[i]=st.empty()?-1:st.top();
      st.push(i);
    }
    while(!st.empty())
    {
        area=vec[st.top()]*((vec.size()-vec1[st.top()]-1));
        if(area>max)
         max=area;
      st.pop(); 
    }
    return max ;

}




class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int cols=matrix[0].size();
        int rows=matrix.size();
        int maxi=INT_MIN;
        int max=INT_MIN;
        int p;
        vector<int>vec(cols,0);
        
        for(int i=0;i<rows;i++)
        {
            int max=INT_MIN;
           int k=0;
          for(int j=0;j<cols;j++)
          {
            if(matrix[i][j]=='1')
            {
              vec[k]+=1;
              k++;
            }
            else
             vec[k++]=0;  
          }
         p= maximal(vec,max);
          if(p>maxi)
            maxi=p;
          
        }
        return maxi;
        
    }
};