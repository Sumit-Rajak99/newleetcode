class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long absSum = 0;
        int negCount = 0;
        int minAbs = INT_MAX;
        bool hasZero = false;

        for (auto &row : matrix) {
            for (int x : row) {

                if (x == 0)
                    hasZero = true;

                if (x < 0)
                    negCount++;

                int a = abs(x);
                absSum += a;
                minAbs = min(minAbs, a);
            }
        }

        
        if (hasZero)
            return absSum;

        
        if (negCount % 2 == 0)
            return absSum;

        return absSum - 2LL * minAbs;
    }
};
