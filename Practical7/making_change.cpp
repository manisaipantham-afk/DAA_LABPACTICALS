#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to find minimum number of coins
int minCoins(vector<int>& coins, int amount) {

    // dp[i] = minimum coins required to make amount i
    vector<int> dp(amount + 1, INT_MAX);

    // 0 amount requires 0 coins
    dp[0] = 0;

    // Calculate minimum coins for every amount
    for (int i = 1; i <= amount; i++) {

        for (int coin : coins) {

            if (coin <= i && dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    // If amount cannot be formed
    if (dp[amount] == INT_MAX) {
        return -1;
    }

    return dp[amount];
}

int main() {

    int n;

    cout << "Enter number of coins: ";
    cin >> n;

    vector<int> coins(n);

    cout << "Enter coin denominations: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int amount;

    cout << "Enter amount: ";
    cin >> amount;

    int result = minCoins(coins, amount);

    if (result == -1) {
        cout << "The amount cannot be formed using the given coins." << endl;
    }
    else {
        cout << "Minimum number of coins required: "
             << result << endl;
    }

    return 0;
}
