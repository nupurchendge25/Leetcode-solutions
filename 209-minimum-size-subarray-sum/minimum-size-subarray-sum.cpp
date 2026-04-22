class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;
        int sum=0;
        int minCount=INT_MAX;
        while(right<n){
            sum+=nums[right];
            while(sum>=target){
                int size=right-left+1;
                minCount=min(minCount,size);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        return minCount==INT_MAX ? 0 : minCount;
    }
};