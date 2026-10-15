class Solution {
public:

    vector<int> generateRow(int rowIndex){
        long long ans = 1;
        vector<int>res;
        res.push_back(ans);
        for(int i = 1;i<=rowIndex;i++){
            ans *= (rowIndex-i+1);
            ans /= i;
            res.push_back(ans);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i = 0;i<numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};