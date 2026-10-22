
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

const int INF = INT_MAX / 2;

int tsp(int mask, int pos, int n,
        const vector<vector<int>>& cost,
        vector<vector<int>>& dp) {

    // All cities visited: return to starting city
    if (mask == (1 << n) - 1) {
        return cost[pos][0];
    }

    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }

    int ans = INF;

    for (int city = 0; city < n; city++) {
        // Visit only cities that have not been visited
        if ((mask & (1 << city)) == 0) {
            int newCost = cost[pos][city]
                + tsp(mask | (1 << city), city, n, cost, dp);

            ans = min(ans, newCost);
        }
    }

    return dp[mask][pos] = ans;
}

int main() {
    int n;

    cout << "Enter number of cities: ";
    cin >> n;

    if (n < 2 || n > 20) {
        cout << "Please enter between 2 and 20 cities.\n";
        return 0;
    }

    vector<vector<int>> cost(n, vector<int>(n));

    cout << "Enter the cost matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    int states = 1 << n;
    vector<vector<int>> dp(states, vector<int>(n, -1));

    int minCost = tsp(1, 0, n, cost, dp);

    cout << "\nMinimum travelling cost: " << minCost << "\n";

    // Reconstruct the optimal tour
    cout << "Optimal tour: 1";
    int mask = 1;
    int pos = 0;

    while (mask != states - 1) {
        int bestCity = -1;
        int bestCost = INF;

        for (int city = 0; city < n; city++) {
            if ((mask & (1 << city)) == 0) {
                int candidate = cost[pos][city]
                    + tsp(mask | (1 << city), city, n, cost, dp);

                if (candidate < bestCost) {
                    bestCost = candidate;
                    bestCity = city;
                }
            }
        }

        if (bestCity == -1) {
            cout << "\nNo valid tour found.\n";
            return 0;
        }

        cout << " -> " << bestCity + 1;
        mask |= (1 << bestCity);
        pos = bestCity;
    }

    cout << " -> 1\n";

    return 0;
}
