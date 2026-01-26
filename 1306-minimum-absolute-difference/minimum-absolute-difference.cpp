class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int n=arr.size();
        vector<vector<int>> res;
        int mindiff=INT_MAX;

        for(int i=1;i<n;i++){
            mindiff=min(mindiff,abs(arr[i]-arr[i-1]));
        }

        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])==mindiff){
                res.push_back({arr[i-1],arr[i]});
            }
        }

        return res;

    }
};