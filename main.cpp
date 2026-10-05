#include <iostream>
#include <variables.cpp>





int main() {
    std::cout << "Basic calculator\n\n" << "enter a operation: ";
    char oper; std::cin >> oper;

    switch(oper) {
        case '+':
            double num1, num2;
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;
            std::cout << "Result of operation: " << num1 + num2 << '\n';

        case '-':
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;
            std::cout << "Result of operation: " << num1 - num2 << '\n';

        case '*':
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;
            std::cout << "Result of operation: " << num1 * num2 << '\n';
        case '/':
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;
            std::cout << "Result of operation: " << num1 / num2 << '\n';
    }




    return 0;
}