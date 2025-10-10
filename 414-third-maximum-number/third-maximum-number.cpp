class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        set<int> s(nums.begin(), nums.end());
        auto it = s.rbegin();
        if(s.size()<3){
            return *it;
        }
        else{
            advance(it, 2);       
            return *it;
        }
        return -1;
    }
};