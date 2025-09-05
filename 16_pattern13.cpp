// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include<iostream>
void pattern13(int N){
    int count=1;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<count<< " ";
            count++;
        }
        
        std::cout<<std::endl;  
    }
    
}
int main()
{
    pattern13(5);
    return 0;
}
