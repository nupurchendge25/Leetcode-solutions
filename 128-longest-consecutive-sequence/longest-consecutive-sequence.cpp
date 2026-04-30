class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;

        int maxCount=0;
        int sum=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i]){
                sum=sum+1;
                maxCount=max(maxCount,sum);
            }
            else if(nums[i-1]==nums[i]){
                continue;
            }
            else{
                sum=1;
            }
        }
        if(maxCount==0) return 1;
        return maxCount;
        
    }
};