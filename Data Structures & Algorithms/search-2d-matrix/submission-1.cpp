class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, bottom = m - 1, left = 0, right = n - 1;

        while (top <= bottom) {
            int midr = (top + bottom) / 2;

            if (matrix[midr][0] < target) {
                if (matrix[midr][n - 1] >= target) {
                    while (left <= right) {
                        int midc = (left + right) / 2;

                        if (matrix[midr][midc] == target) {
                            return true;
                        } else if (matrix[midr][midc] < target) {
                            left = midc + 1;
                        } else {
                            right = midc - 1;
                        }
                    }

                    return false;
                } else {
                    top = midr + 1;
                }
            } else if (matrix[midr][0] == target) {
                return true;
            } else {
                bottom = midr - 1;
            }
        }

        return false;
    }
};