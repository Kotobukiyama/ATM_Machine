#include <iostream>
#include <cstdlib>


int main()
{
    bool isTrue{true};
    int password {123};
    int tries {0};
    double deposit {0.0};
    double balance {0.0};
    double withdraw {0.0};

    system("Color 4E");
    do
    {
        std::cout << "***Welcome to the Machine!***\n";
        std::cout << "Enter your PIN: ";
        int pin{};
        std::cin >> pin;
        if (pin == password)
        {
            do
            {
            std::cout << "\nOptions Available:\n"
                      << "1. Deposit\n"
                      << "2. Withdraw\n"
                      << "3. Balance\n"
                      << "4. Exit\n";

            std::cout << "Choose an option: ";
            int entry{};
            std::cin >> entry;

            switch (entry)
            {
            case 1:
                std::cout << "Deposit amount: ";
                std::cin >> deposit;
                balance = balance + deposit;
                break;
            case 2:
                if (balance <= 0)
                    std::cout << "Please deposit some funds.\n";
                else
                {
                    std::cout << "Withdraw amount: ";
                    std::cin >> withdraw;
                    balance = balance - withdraw;
                }
                break;
            case 3:
                std::cout << "Current balance: R$" << balance << '\n';
                break;
            case 4:
                std::cout << "Have a nice day!\n";
                isTrue = false;
                break;
            }
            } while (isTrue != false);

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
