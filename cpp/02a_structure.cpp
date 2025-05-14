#include<iostream>

struct rectangle {
    int lenght;
    int breadth;
}; 
int main()
{
  struct rectangle r;
  r.lenght=10;
  r.breadth=20;
  std::cout<<sizeof(r)<< std::endl;
}
