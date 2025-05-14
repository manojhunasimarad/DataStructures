#include<iostream>
#include<stdio.h>
int main()
{
  int A[]={0,2,6,8,15};
  std::cout<<sizeof(A)<<std::endl;
  for(int i=0;i<sizeof(A)/sizeof(int);i++)
  {
      std::cout<<A[i]<<std::endl;
  }
}
