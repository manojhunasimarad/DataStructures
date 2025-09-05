// 1      1 6   2N-2i
// 12    21 4   2N-2i
// 123  321 2   N-2i
// 12344321 0   N-i

#include<iostream>

void pattern12(int N)
{
    for(int i=1;i<=N;i++)
    {
        // printnumbers
        for(int j=1;j<=i;j++)
        {
            std::cout<<j;
        }
        // printspaces
        for(int j=0;j<2*(N-i);j++)
        {
            std::cout<<" ";
        }
        // printnumbers
        for(int j=i;j>0;j--)
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
}

int main()
{
    pattern12(4);
    return 0;
}