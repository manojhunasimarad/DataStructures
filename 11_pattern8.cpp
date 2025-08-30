// *********    0 7 0 => i 2(N-i)-1 i    
//   *****      1 5 1 => i 
//    ***   
//     *       

#include <iostream>

void pattern8(int N){
    for(int i=0;i<N;i++)
    {
        //spaces
        for(int j=0;j<i;j++)
        {
            std::cout << " ";
        }
        //stars
        for(int j=0;j<2*N-i*2-1;j++)
        {
            std::cout << "*";
        }
        //spaces
        for(int j=0;j<i;j++)
        {
            std::cout << " ";
        }
        std::cout<<std::endl;
    }
       

}

int main()
{
    pattern8(4);
    return 0;
}
