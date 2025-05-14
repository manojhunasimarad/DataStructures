#include<iostream>

int main()
{
    int *p;
    int number_elements=5;
    p=(int *)malloc(number_elements*sizeof(int));
    
    p[0]=76;
    p[1]=2;
    
// either use array name or arry first element
for(int i=0;i<number_elements;i++)
{
    std::cout<<p[i]<<std::endl;
}
  
}
