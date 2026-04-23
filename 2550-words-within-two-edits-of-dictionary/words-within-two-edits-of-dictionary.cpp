class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> result;
    
        for( string &p: queries){
            for(string &d : dictionary){
                int diff=0;
                for(int i=0;i<p.size();i++){
                    if(p[i]!=d[i]) diff++;
                    if(diff>2) break;
                }
                if(diff<=2){
                     result.push_back(p) ;
                     break;
                }
            }
        }
        return result;
    }
};