// Given an integer N, print the following pattern.
// Example 1:
// Input: N = 3
// Output:
// * * *
// * * *
// * * *

#include <iostream>

void pattern1(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int N;
    std::cin >> N;
    pattern1(N);
    return 0;
}