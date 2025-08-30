// 12345
// 1234
// 123
// 12
// 1
#include<iostream>

void pattern6(int N){
for(int i=N;i>0;i--)    
{
    for(int j=1;j<=i;j++)
    {
        std::cout<<j;
    }
    std::cout<<std::endl;
}
}
int main()
{
    int N;
    std::cin>>N;
    pattern6(N);

}