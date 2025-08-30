//    *         3 1 3   4-1 2.i-1 4-1
//   ***        2 3 2   4-2 2.i-1 4-2
//  *****       1 5 1   4-3 2.i-1 4-3
// *******      0 7 0   4-4 2.i-1 4-4

#include <iostream>

void pattern7(int N)
{
    for (int i = 1; i <= N; i++)
    {
        // print spaces
        for (int j = 0; j < N - i; j++)
        {
            std::cout << " ";
        }
        // print star
        for (int j = 0; j < 2 * i - 1; j++)
        {
            std::cout << "*";
        }

        // print spaces
        for (int j = 0; j < N - i; j++)
        {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{

    int N = 6;
    pattern7(N);
}