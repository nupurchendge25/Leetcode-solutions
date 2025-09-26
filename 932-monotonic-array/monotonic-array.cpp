class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        if(n<=2){ return true;}
        
        int i = 0;
        while(i < n-1 && nums[i] == nums[i+1]) {i++;} // skip equal elements
            if(i < n-1 && nums[i] > nums[i+1]) {
                count = 1;
            }
        
        if(count==1){
            for(int i=1;i<n-1;i++){
                if(nums[i]<nums[i+1]){
                    return false;
                }
            }
        }
        else{
            for(int i=1;i<n-1;i++){
                if(nums[i]>nums[i+1]){
                    return false;
                }
            }
        }
        return true;
    }
};