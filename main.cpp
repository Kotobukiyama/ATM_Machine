#include <iostream>
#include <cstdlib>


int main()
{
    bool isTrue{true};
    int password {123};
    int tries {0};

    do
    {
        std::cout << "***Welcome to the Machine!***\n";
        std::cout << "Enter your PIN: ";
        int pin{};
        std::cin >> pin;
        if (pin == password)
        {
            std::cout << "\nOptions Available:\n"
                      << "1. Deposit\n"
                      << "2. Withdraw\n"
                      << "3. Balance\n"
                      << "4. Exit\n";

            std::cout << "Choose an option: ";
            int entry{};
            std::cin >> entry;
        }
        else
        {
            tries ++;
            if (tries == 3)
                isTrue = false;
            else
                std::cout << "Wrong PIN!\n";
        }
    } while (isTrue != false);


    return 0;
}
