#include<iostream>
#include<stdio.h>
int main()
{
  int A[5];
  A[0]=12;
  A[1]=24;
  A[2]=36;
  std::cout<<sizeof(A)<<std::endl;
  std::cout<<A[1]<<std::endl;
  printf("%d",A[2]);
}
