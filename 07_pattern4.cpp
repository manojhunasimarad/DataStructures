// 1
// 12
// 123
// 1234
// 12345
// 123456

#include <iostream>

void pattern4(int N)
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
    pattern4(N);
    return 0;
}