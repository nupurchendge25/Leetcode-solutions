class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> numIn;

        for(int i=0;i<n;i++){
            numIn.push_back({nums[i],i});
        }

        sort(numIn.begin(),numIn.end());

        int left=0;
        int right=n-1;
        int sum;
        while(left<right){
            sum=numIn[left].first+numIn[right].first;
            if(sum==target){
                return {numIn[left].second ,numIn[right].second};
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {-1,-1};
    }
};