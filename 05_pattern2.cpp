// Given an integer N, print the following pattern.
// Example 1:
// Input: N = 3
// Output:
// *
// * *
// * * *
// * * * *

#include <iostream>

void pattern2(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
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
    pattern2(N);
    return 0;
}