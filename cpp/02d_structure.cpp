#include<iostream>

struct rectangle {
    int lenght;
    int breadth;
    char string;
} r1; 
int main()
{
  r1={10,20};
  std::cout<<sizeof(r1)<< std::endl;
//   printf("%lu",sizeof(r1));
}


// This concept is called padding of memory
