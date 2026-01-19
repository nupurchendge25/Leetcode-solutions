class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int g=goal.size();

        if(n!=g){
            return false;
        }

        string dob=s+s;
        return dob.find(goal)!=string :: npos;

    }
};