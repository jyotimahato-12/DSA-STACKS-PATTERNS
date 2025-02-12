class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        long long int area;
        int n=heights.size();
        vector<int>vec(n);
        int max=INT_MIN;
        for(int i=0;i<heights.size();i++)
        {
            while(!st.empty()&&heights[st.top()]>=heights[i])
            {
                area=heights[st.top()]*(i-vec[st.top()]-1);
                if(area>max)
                {
                  max=area;
                }
                st.pop();

            }
            vec[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty())
        {
            area=heights[st.top()]*(n-vec[st.top()]-1);
            if(area>max)
              max=area;
           st.pop();   
        }
        return max;
    }
};
        