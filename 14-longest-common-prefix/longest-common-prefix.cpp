class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];

        int len=min(first.size(),last.size());
        string ans="";
        for(int i=0;i<len;i++){
            if(first[i]!=last[i]){
                break;
            }
            ans=ans+first[i];
        }
        return ans;
    }
};