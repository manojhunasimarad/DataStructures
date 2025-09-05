//0
//1 0
//0 1 0
//1 0 1 0
//0 1 0 1 0
//
#include<iostream>
void bitchange(int N)
{
	for(int i=1;i<=N;i++)
	{
		for(int j=0;j<i;j++)
		{
			std::cout<<(i+j)%2<<" ";
		}
		std::cout<<std::endl;	
	}
}
int main()
{
	bitchange(5);
	return 0;
}
