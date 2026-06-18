class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();


    bool flag_r = false, flag_c = false;
    for (int i = 0; i < n; i++) {
        if (matrix[i][0] == 0) {
            flag_r = true;
            break;
        }
    }

    for (int i = 0; i < m; i++) {
        if (matrix[0][i] == 0) {
            flag_c = true;
            break;
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0; //row
                matrix[0][j] = 0; //column
            }
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }


    

    if (flag_c) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }

    if (flag_r ) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }


   }

};