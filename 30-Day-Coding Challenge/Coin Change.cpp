

#include <iostream>
#include <vector>
using namespace std;

long getWays(int n, vector<long> c) {
    vector<long> dp(n + 1, 0);
    dp[0] = 1;


    for (long coin : c) {
        for (int amount = coin; amount <= n; amount++) {
            dp[amount] += dp[amount - coin];
        }
    }

    return dp[n];
}
