class Solution {
public:
    void dfs(int node, vector<vector<int>> &adjls,vector<int> &visited){
        visited[node]=1;
        for(auto it : adjls[node]){
            if(!visited[it]){
                dfs(it,adjls,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<vector<int>> adjls(V);   

        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        vector<int> visited(V, 0);
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                cnt++;
                dfs(i,adjls,visited);
            }
        }
        return cnt;
    }
};