
##  Aim

To implement the factorial of a number using both **iterative** and **recursive** methods and compare their execution time and complexity.

---

## Theory

The factorial of a non-negative integer `n` is defined as:

n! = n × (n-1) × (n-2) × ... × 2 × 1

Special Case:

0! = 1

Example:

5! = 120

---

##  Algorithms

### Iterative Method
- Initialize factorial as 1.
- Multiply all numbers from 1 to n.
- Print the result.

### Recursive Method
- Base Case:
  - If n is 0 or 1, return 1.
- Recursive Case:
  - Return n × factorial(n−1).

---

##  Language Used

- C++

##  Time Complexity

| Method | Time Complexity | Space Complexity |
|---------|-----------------|------------------|
| Iterative | O(n) | O(1) |
| Recursive | O(n) | O(n) |

---

## Conclusion

Both methods compute the factorial correctly. The iterative method is more memory-efficient since it uses constant extra space, while the recursive method requires additional stack memory for recursive calls.

---

##  Author

**Pantham Mani Sai**
