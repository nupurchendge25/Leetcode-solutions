class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        
        int n=nums.size();
        vector<int> result(n);

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        int i=0;
        int j=0;
        while(j<positive.size()){
            result[i]=positive[j];
            i=i+2;
            j++;
        }
        int k=1;
        int l=0;
        while(l<negative.size()){
            result[k]=negative[l];
            l++;
            k=k+2;
        }

        return result;
    }
};