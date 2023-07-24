// Sum of natural numbers with all possible solution to analyse the algorithim

// Online C++ compiler to run C++ program online
#include <iostream>

// Optimized solution with constant time
//* Complexity Time taken: C1
int fun1(int n)
{
    return n * (n + 1) / 2;
}

// Moderate solution with n colplexity
//* time taken : C1n + c2 
int fun2(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// Higly unefficient solution with n2 complexity
//* Time taken c1n + c2n +  c3 = n^2
int fun3(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum++;
        }
    }
    return sum;
}
int main()
{
    // Write C++ code here
    std::cout << "sum of natural number" << fun1(5) << " " << fun2(5) << " " << fun3(5);
    return 0;
}
