class Solution {
public:
    int search(vector<int>& nums, int target) {
         int low=0,med;
        int high=nums.size()-1;

        while(low<=high){
            med=low+(high-low)/2;
            if(nums[med]==target){
                return med;
            }
            else if(nums[med]<target){
                low=med+1;
            }
            else{
                high=med-1;
            }
        }
         return -1;
    }
};