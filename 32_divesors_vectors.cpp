// Print all Divisors of a given Number
// Input:N = 36
// Output:[1, 2, 3, 4, 6, 9, 12, 18, 36]
    
#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>

//  error: ‘vector’ does not name a type   
//  vector<int> becasue std::vector should be used and div.pushback(i) throes error div.push_back(i);
// The code throws a floating point exception error because of division by zero occurring in the loop inside the divisors function
// ‘sort’ is not a member of ‘std’; did you mean ‘sqrt’? #include<algorithm>
std::vector<int> divisors(int num)
{
    int count=0;
    std::vector<int> div; 
    
    for(int i=1;i<sqrt(num);i++)
    {
        if(num%i==0){
            div.push_back(i);
            if(num/i!=i){
            div.push_back(num/i);
        }
        }

    }
    std::sort(div.begin(), div.end());

    return div;
}

int main()
{
    std::vector<int> div=divisors(36);

    for (int numer : div) {
        std::cout << numer << " ";
    }
    std::cout << std::endl;
    return 0;
}
