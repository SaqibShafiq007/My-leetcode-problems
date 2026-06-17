class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    // Mark original zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][j] = INT_MAX-5;
            }
        }
    }

    // Set rows and columns to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == INT_MAX-5) {
                matrix[i][j] = 0;

                // Column j
                for (int k = 0; k < n; k++) {
                    if (matrix[k][j] != INT_MAX-5)
                        matrix[k][j] = 0;
                }

                // Row i
                for (int k = 0; k < m; k++) {
                    if (matrix[i][k] != INT_MAX-5)
                        matrix[i][k] = 0;
                }
            }
        }
    }
}

};