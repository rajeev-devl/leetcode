class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int row = 0;
        int cols = matrix[0].size()-1;

        while(row<n && cols>=0){
            int current = matrix[row][cols];
            if(current==target){
                return true;
            }
            else if(current>target){
                cols -= 1;
            }else{
                row += 1;
            }
        }
        return false;

    }
};