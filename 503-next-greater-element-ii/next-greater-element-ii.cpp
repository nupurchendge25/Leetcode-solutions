class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> result(n,-1);

        for(int i=0;i<2*n;i++){
            int idx=i%n;
            while(!st.empty() && nums[st.top()]<nums[idx]){
                result[st.top()]=nums[idx];
                st.pop();
            }
            if(i<n){
                st.push(idx);
            }
        }
        return result;
    }
};