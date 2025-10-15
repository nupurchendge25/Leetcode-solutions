class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        int b=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                a++;
            }
            else if(nums[i]==1){
                b++;
            }
            else{
                c++;
            }
        }
        int k=0;
        int m=0;
        int l=0;
        int i=0;
        while(k<a){
            nums[i]=0;
            k++;
            i++;
        }
        while(l<b){
            nums[i]=1;
            l++;
            i++;
        }
        while(m<c){
            nums[i]=2;
            m++;
            i++;
        }
        
    }
};