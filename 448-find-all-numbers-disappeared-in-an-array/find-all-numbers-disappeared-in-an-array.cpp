class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> res;
        int n=nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        for(int i=1;i<n+1;i++){
            if(mp[i]==0){
                res.push_back(i);
            }
        }
        return res;

    }
};