#include<iostream>
int GCD(int n1,int n2) {
    int checkmax=0;
    if(n1<n2){
        checkmax=n1;
    }
    else checkmax=n2;
    for(int i=checkmax;i>0;i--)
    {
        if(n1%i ==0 && n2%i ==0) return i;
    }
    return 1;
}


int main()
{
    int HCF;
    HCF=GCD(-20,50);
    std::cout<<HCF;
    return 0;
}