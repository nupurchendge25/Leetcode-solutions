class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int j=0;
        while(j<nums.size()-1){
            if(nums[j]==nums[j+1]){
                return nums[j];
            }
            j++;
        }
        return -1;
    }
};