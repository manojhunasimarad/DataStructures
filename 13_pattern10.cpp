// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *


#include<iostream>

void pattern10(int N){
for (int i=0;i<N;i++)
{
	for(int j=0;j<i+1;j++)
	{
		std::cout<<"*";
	}
	
	std::cout<<std::endl;
}
}
void pattern10_2( int N)
{
for(int j=0;j<N-1;j++)
{	
	for(int i=N-1-j;i>0;i--)
{
	std::cout<<"*";
}
std::cout<<std::endl;
}
}

int main()
{
pattern10(5);
pattern10_2(5);
return 0;
}
