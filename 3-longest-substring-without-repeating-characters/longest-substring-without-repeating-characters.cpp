class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        int hash[256];
        for(int i=0;i<256;i++){
            hash[i]=-1;
        }
        int maxlen=0;
        int len=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                l=max(hash[s[r]]+1,l);
            }

            len=r-l+1;

            maxlen=max(maxlen,len);

            hash[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};