#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 0/1 Knapsack using Dynamic Programming
int knapsack(int capacity, vector<int>& weight, vector<int>& value) {
    int n = weight.size();

    // dp[i][w] = maximum value using first i items
    // with knapsack capacity w
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {

            // Do not include the current item
            dp[i][w] = dp[i - 1][w];

            // Include the current item if possible
            if (weight[i - 1] <= w) {
                dp[i][w] = max(
                    dp[i][w],
                    value[i - 1] + dp[i - 1][w - weight[i - 1]]
                );
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    int n, capacity;

    cout << "Enter number of items: ";
    cin >> n;

    vector<int> weight(n);
    vector<int> value(n);

    cout << "Enter weights of items: ";
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    cout << "Enter values of items: ";
    for (int i = 0; i < n; i++) {
        cin >> value[i];
    }

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    int maximumValue = knapsack(capacity, weight, value);

    cout << "Maximum value = " << maximumValue << endl;

    return 0;
}
