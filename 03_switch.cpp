// Given the integer day denoting the day number, print on the screen which day of the week it is.
// Week starts from Monday and for values greater than 7 or less than 1, print Invalid.
// Ensure only the 1st letter of the answer is capitalised.

#include <iostream>

void whichWeekDay(int day)
{
    switch (day)
    {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Friday" << std::endl;
        break;
    case 6:
        std::cout << "Saturday" << std::endl;
        break;
    case 7:
        std::cout << "Sunday" << std::endl;
        break;
    default:
        std::cout << "Invalid" << std::endl;
    }
}

int main()
{
    whichWeekDay(15);
    return 0;
}