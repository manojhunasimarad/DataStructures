// Given marks of a student, print on the screen:

// Grade A if marks >= 90
// Grade B if marks >= 70
// Grade C if marks >= 50
// Grade D if marks >= 35
// Fail, otherwise.

#include <iostream>

void studentGrade(int marks)
{
    if (marks >= 90 && marks <= 100)
        std::cout << "Grade A" << std::endl;
    else if (marks >= 70)
        std::cout << "Grade B" << std::endl;
    else if (marks >= 50)
        std::cout << "Grade C" << std::endl;
    else if (marks >= 35)
        std::cout << "Grade D" << std::endl;
    else if (marks >= 0 && marks < 35)
        std::cout << "Fail" << std::endl;
}

int main()
{
    studentGrade(90);
    return 0;
}