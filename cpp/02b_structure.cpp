#include<iostream>

struct rectangle {
    int lenght;
    int breadth;
} r1; 
int main()
{
  r1.lenght=10;
  r1.breadth=20;
  std::cout<<sizeof(r1)<< std::endl;
}
