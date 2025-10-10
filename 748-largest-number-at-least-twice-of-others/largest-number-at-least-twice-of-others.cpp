class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int size=nums.size();
        int index=0;
        for(int j=1;j<size;j++){
            if(nums[index]<nums[j]){
                index=j;
            }
        }
        

        sort(nums.begin(),nums.end());
        
        int max=nums[size-1];
        if(nums[size-2]<=max/2){
            return index;
        }

        return -1;
    }
};