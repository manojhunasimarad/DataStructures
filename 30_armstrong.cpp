#include<iostream>
#include<cmath>


    bool isArmstrong(int n) {
        int count=0,lastdigit=0,copy2=n,copy=n,sum=0;
        while(n>0)
        {
            n=n/10;
            count++;
        }
        // std::cout<<count;

        while (copy>0)
        {
            lastdigit= copy%10;
            copy=copy/10;
            sum=pow(lastdigit,count)+sum;
            // std::cout<<sum<<std::endl;
        }
        // std::cout<<sum;

        if(sum==copy2)
        {
            return 1;
        }
        else
        return 0;

    }
int main()
{
    std::cout<<isArmstrong(183);
    return 0;
}


