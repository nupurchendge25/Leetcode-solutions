class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> digits;
        if(x<0){return false;}
        while(x>0){
            digits.push_back(x%10);
            x=x/10;
        }
        reverse(digits.begin(),digits.end());
        int left=0;
        int right=digits.size()-1;
        while(left<right){
            if(digits[left]!=digits[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};