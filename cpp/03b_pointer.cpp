#include<iostream>

int main()
{
    int A[]={10,20,50,70};
    int *p;
//   p=A;
  
  p=&A[0];
// either use array name or arry first element
for(int i=0;i<sizeof(A)/sizeof(int);i++)
{
    std::cout<<p[i]<<std::endl;
}
  
}
