class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n2=magazine.size();

        unordered_map<int,int> freq_m;

        for(int i=0;i<n2;i++){
            freq_m[magazine[i]-'a']++;
        }

        for(char ch : ransomNote){
            freq_m[ch-'a']--;

            if(freq_m[ch-'a']<0) return false;
        }
        return true;
    }
};