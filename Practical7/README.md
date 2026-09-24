## Aim

To find the minimum number of coins required to make a given amount using Dynamic Programming.

## Algorithm

1. Read the coin denominations and target amount.
2. Create a DP array of size `amount + 1`.
3. Set `dp[0] = 0`.
4. For each amount, check all coins.
5. Update the minimum number of coins.
6. Print the result.
7. If the amount cannot be formed, display a message.

## Example

```text
Coins = {1, 2, 5}
Amount = 11

Answer = 3
```

Because:

```text
5 + 5 + 1 = 11
```

## Complexity

* **Time:** `O(N × A)`
* **Space:** `O(A)`

## Language

**C++**

## Author

**Pantham Mani Sai**
