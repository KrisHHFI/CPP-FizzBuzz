#include <iostream>

int main()
{
    for (int number = 1; number <= 100; number++)
    {

        if ((number % 3 == 0) && (number % 5 == 0))
        { // If divisible by 3 and 5, print "Fizz Buzz"
            std::cout << "Fizz Buzz" << std::endl;
        }
        else if (number % 3 == 0)
        { // If divisible by 3 "Fizz"
            std::cout << "Fizz" << std::endl;
        }
        else if (number % 5 == 0)
        { // If divisible by 5 "Buzz"
            std::cout << "Buzz" << std::endl;
        }
        else
        {
            std::cout << number << std::endl;
        }
    }

    return 0;
}