#include <iostream>
#include <string>
#include "mathOperations.hpp"

void menu() {
    std::cout << "----Menu----\n";
    std::cout << ">1. Math operations\n";
    std::cout << ">2. Area calculations\n";
    std::cout << ">3. Mass transfer\n";
    std::cout << ">4. Exit\n";
    std::cout << "Your choice: ";
}




int main() {

    double num1, num2;
    bool isOkay = true;
    char choice;
    char oper;

    std::cout << "Basic calculator\n\n";


    while (isOkay) {
        menu();
        std::cin >> choice;

        switch (choice) {
        case '1':
            std::cout << "Choose \n";
            std::cout << ">+\n";
            std::cout << ">-\n";
            std::cout << ">*\n";
            std::cout << ">/\n";
            std::cout << "> Enter a operation: ";
            std::cin >> oper;

            if (oper == '+') {
                std::cout << "> " << "Enter first number: ";
                std::cin >> num1;
                std::cout << "> " << "Enter second number: ";
                std::cin >> num2;
                std::cout << "> " << "Result: " << math::add(num1, num2) << '\n';
            }
            else if (oper == '-') {
                std::cout << "> " << "Enter first number: ";
                std::cin >> num1;
                std::cout << "> " << "Enter second number: ";
                std::cin >> num2;
                std::cout << "> " << "Result: " << math::subtract(num1, num2) << '\n';
            }
            else if (oper == '*') {
                std::cout << "> " << "Enter first number: ";
                std::cin >> num1;
                std::cout << "> " << "Enter second number: ";
                std::cin >> num2;
                std::cout << "> " << "Result: " << math::multiply(num1, num2) << '\n';
            }
            else if (oper == '/') {
                std::cout << "> " << "Enter first number: ";
                std::cin >> num1;
                std::cout << "> " << "Enter second number: ";
                std::cin >> num2;
                std::cout << "> " << "Result: " << math::divide(num1, num2) << '\n';
            }
            else {
                std::cout << "> " << "wrong operation";
                isOkay = false;
            }
        }
    }

    return 0;
}