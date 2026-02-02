class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        int n=nums1.size();
        stack<int> st;

        for(int num : nums2){
            while(!st.empty() && st.top()<num){
                mp[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }
        vector<int> result(n,-1);

        for(int i=0;i<n;i++){
            if(mp.count(nums1[i])){
                result[i]=mp[nums1[i]];
            }
        }
        return result;
    }
};