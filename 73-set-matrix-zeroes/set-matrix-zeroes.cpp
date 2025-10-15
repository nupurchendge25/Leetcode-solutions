class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();//size of rows
        int n=matrix[0].size();//size of columns
        int col0=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    
                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }
        
        
        if(matrix[0][0]==0){
            for(int k=1;k<n;k++){
                matrix[0][k]=0;
            }
        }
        
        if (col0 == 0) {
            for (int s =0; s<m; s++) {
                matrix[s][0] = 0;
            }
        }
    }
};