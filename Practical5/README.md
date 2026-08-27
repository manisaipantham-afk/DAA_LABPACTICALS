
## Aim

To implement the 0/1 Knapsack problem using Dynamic Programming.

## Problem Statement

Given a set of items, where each item has a weight and a value, and a knapsack with a fixed capacity, find the maximum total value that can be placed in the knapsack without exceeding its capacity.

In the 0/1 Knapsack problem, each item can either be:

* Selected completely
* Not selected

An item cannot be selected more than once.

## Algorithm

1. Read the number of items.
2. Read the weight and value of each item.
3. Read the capacity of the knapsack.
4. Create a Dynamic Programming table `dp`.
5. For every item, check whether it should be included or excluded.
6. If the item can fit in the current capacity, calculate the maximum of:

   * Excluding the item
   * Including the item
7. The final answer is stored in `dp[n][capacity]`.
8. Display the maximum value.

## Recurrence Relation

For item `i` and capacity `w`:

If the current item's weight is greater than `w`:

`dp[i][w] = dp[i-1][w]`

Otherwise:

`dp[i][w] = max(dp[i-1][w], value[i-1] + dp[i-1][w-weight[i-1]])`

## Example

### Input

```text
Enter number of items: 4
Enter weights of items: 2 3 4 5
Enter values of items: 3 4 5 6
Enter knapsack capacity: 5
```

### Output

```text
Maximum value = 7
```

The optimal selection is:

* Item 1 → Weight = 2, Value = 3
* Item 2 → Weight = 3, Value = 4

Total weight = `2 + 3 = 5`

Total value = `3 + 4 = 7`

Therefore, the maximum value is **7**.

## Time Complexity

`O(n × W)`

where:

* `n` = number of items
* `W` = capacity of the knapsack

## Space Complexity

`O(n × W)`

because a two-dimensional DP table is used.

## Language

C++

## Author

**Pantham Mani Sai**


