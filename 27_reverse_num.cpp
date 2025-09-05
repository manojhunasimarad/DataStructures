#include<iostream>

int reversenum(int n)
{
    int newnum=0,lastdigit=0;
    while(n>0)
    {

        lastdigit=n%10;
        n=n/10;
        newnum=lastdigit+10*newnum;
    }
    return newnum;
    
}

int main()
{
    int newnum=reversenum(10203040);
    std::cout<<newnum;
    return 0;
}