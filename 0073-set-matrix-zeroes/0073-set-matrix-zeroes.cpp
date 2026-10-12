class Solution {

public:
    // BRUTE FORCE.
    // void makerow(vector<vector<int>>& matrix, int i){
    //     for(int j = 0;j<matrix[0].size();j++){
    //         if(matrix[i][j]!=0){
    //             matrix[i][j] = -1;
    //         }
    //     }
    // }
    // void makecolumn(vector<vector<int>>& matrix ,int j){
    //     for(int i = 0;i<matrix.size();i++){
    //         if(matrix[i][j]!=0){
    //             matrix[i][j] = -1;
    //         }
    //     }
    // }
    void setZeroes(vector<vector<int>>& matrix) {
    //     for(int i = 0;i<matrix.size();i++){
    //         for(int j = 0;j<matrix[0].size();j++){
    //             if(matrix[i][j]==0){
    //                 makerow(matrix,i);
    //                 makecolumn(matrix, j);
    //             }
    //         }
    //     }

    //     for(int i = 0;i<matrix.size();i++){
    //         for(int j = 0;j<matrix[0].size();j++){
    //             if(matrix[i][j]==-1){
    //                 matrix[i][j]=0;
    //             }
    //         }
    //     } tc = O((n*m)*(n+m)+(n*m)) --> O(n^3)

    // BETTER SOLUTION

    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> col(m, 0);
    vector<int> row(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}
}
;