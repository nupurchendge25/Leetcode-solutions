class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // index to place next valid element
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};