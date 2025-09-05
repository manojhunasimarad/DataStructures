// Print all Divisors of a given Number
// Input:N = 36
// Output:[1, 2, 3, 4, 6, 9, 12, 18, 36]
    
#include<iostream>
#include<math.h>
int divisors(int num)
{

    // for(int i=1;i<=num;i++)
    // {
    //     if(num%i==0)
    //     {
    //         std::cout<<i <<" ";
    //     }
    // }
    // std::cout<<std::endl;

    for(int i=1;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            std::cout<<i <<" ";
             if(num/i != i)
        {
            std::cout<<(num/i) << " ";
        }
        }
       
    }

    return 0;
}

int main()
{
    divisors(36);
    return 0;
}
