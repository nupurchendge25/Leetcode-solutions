class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     int n=nums.size();

     int left=0;
     int len;
     int zero_count=0;
     int maxlen=0;

     for(int i=0;i<n;i++){
        if(nums[i]==0){
            zero_count++;
        }
        if(zero_count>k){
            if(nums[left]==0){
                zero_count--;
            }
            left++;
        }
        len=i-left+1;
        maxlen=max(maxlen,len);
     }  
     return maxlen; 
    }
};