#include<iostream>

struct rectangle {
    int lenght;
    int breadth;
} r1; 
int main()
{
  r1={10,20};
  std::cout<<sizeof(r1)<< std::endl;
}
