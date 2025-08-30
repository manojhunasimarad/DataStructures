#include <iostream>

void printNumber()
{
    int x;
    std::cin >> x;
    if (x < 1000 && x > -1000)
        std::cout << x;
}

int main()
{
    printNumber();
    return 0;
}