#include <iostream>
using namespace std;

// Iterative Factorial
long long iterativeFactorial(int n)
{
    long long fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Recursive Factorial
long long recursiveFactorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * recursiveFactorial(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Iterative Factorial = " << iterativeFactorial(n) << endl;
    cout << "Recursive Factorial = " << recursiveFactorial(n) << endl;

    cout << "\nTime Complexity (Iterative): O(n)";
    cout << "\nSpace Complexity (Iterative): O(1)";

    cout << "\nTime Complexity (Recursive): O(n)";
    cout << "\nSpace Complexity (Recursive): O(n)";

    return 0;
}
