#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int matrixChainMultiplication(vector<int>& p) {
    int n = p.size() - 1;

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int length = 2; length <= n; length++) {
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int cost = dp[i][k]
                         + dp[k + 1][j]
                         + p[i] * p[k + 1] * p[j];

                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
    int n;

    cout << "Enter number of matrices: ";
    cin >> n;

    vector<int> p(n + 1);

    cout << "Enter dimensions: ";
    for (int i = 0; i <= n; i++) {
        cin >> p[i];
    }

    int result = matrixChainMultiplication(p);

    cout << "Minimum number of multiplications = "
         << result << endl;

    return 0;
}
