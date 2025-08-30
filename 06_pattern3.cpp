// 1
// 22
// 333
// 4444
// 55555

#include <iostream>

void pattern3(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
            std::cout << j;

        std::cout << std::endl;
    }
}

int main()
{
    int N;
    std::cin >> N;
    pattern3(N);
    return 0;
}