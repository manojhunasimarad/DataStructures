//    *         3 1 3 => n-i-1  2(N-i)-1
//   ***        2 3 2 => N-i-1  2(N-i)-1        
//  *****       1 5 1 = > N-i-1     
// *******      0 7 0 = > N-i-1  
// *******        
//  *****      
//   ***   
//    *       


#include<iostream>

void pattern9_1(int N){
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            std::cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            std::cout<<"*";
        }
                for(int j=0;j<N-i-1;j++)
        {
            std::cout<<" ";
        }
    std::cout<<std::endl;
    }

}

void pattern9_2(int N){
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<i;j++)
        {
            std::cout<<" ";
        }
        for(int j=0;j<2*(N-i)-1;j++)
        {
            std::cout<<"*";   
        }
        for(int j=0;j<i;j++)
        {
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }

}


int main()
{
    pattern9_1(4);
    pattern9_2(4);
    return 0;
}
