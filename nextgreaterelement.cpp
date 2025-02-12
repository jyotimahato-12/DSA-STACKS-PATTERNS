class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        vector<int>ans(arr.size());
        stack<int>st;
        for(int i=arr.size()-1;i>=0;i--)
        {
            while(!st.empty()&&st.top()<=arr[i])
            {
                st.pop();
            }
            ans[i]=st.empty()?-1:st.top();
            st.push(arr[i]);
        }
        return ans;
        
    }
};