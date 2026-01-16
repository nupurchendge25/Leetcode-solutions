class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count=0;
        int number=0;
        int n=nums.size();

        for(int i=0;i<n;i++){

            if(count==0){
                number=nums[i];
                count++;
            }
            else if(nums[i]==number){
                count++;
            }
            else{
                count --;
            }
        }

        int count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==number){
                count1++;
            }
        }

        if(count1>=(n/2)){
            return number;
        }
       return -1; 
    }
};