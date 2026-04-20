class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans=0;
        for(int i=0;i<colors.size()-1;i++){
            if(colors[i]!=colors[colors.size()-1]){
                ans=max(ans,(int)colors.size() - 1 - i);
            }
        }

        for(int j=colors.size()-1;j>=0;j--){
            if(colors[j]!=colors[0]){
                ans=max(ans,j);
            }
        }

        return ans;
    }
};