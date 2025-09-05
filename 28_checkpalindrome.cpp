#include<iostream>



bool isPalindrome(int n) {
    int rev_num=0,last=0;
    int num_copy=n;
    while(n>0)
    {
        last=n%10;
        n=n/10;
        rev_num=last+rev_num*10;
    }

    if(rev_num==num_copy) // for this step line 7 is created
    return 1;
    else
    return 0;
    }

int main()
{
    std::cout<<isPalindrome(457654)<<std::endl;
    return 0;
}