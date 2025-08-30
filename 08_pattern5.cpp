// *****
// ****
// ***
// **
// *
#include<iostream>

void pattern5(int N){
for(int i=0;i<N;i++)
{
    for(int j=N;j>i;j--)
    {
        std::cout<<"*";
    }
    std::cout<<std::endl;
}
}
int main()
{
    int N;
    std::cin>>N;
    pattern5(N);

}