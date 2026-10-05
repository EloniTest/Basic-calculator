#include <iostream>
#include <string>
#include "variables.hpp"
#include "mathOperations.hpp"


int main() {

    double num1, num2;
    bool isOkay = true;
    std::string oper;

    std::cout << "Basic calculator\n\n";




    while(isOkay) {

        std::cout << "> Enter a operation: ";
        std::cin >> oper;

        if(oper == "exit") {
            std::cout << "> " << "Exit the program";
            break;
        }

        else if(oper == "+") {
            std::cout << "> " << "Enter first number: ";
            std::cin >> num1;
            std::cout << "> " << "Enter second number: ";
            std::cin >> num2;
            std::cout << "> " << "Result: " << math::add(num1,num2);
        }
        else if(oper == "-") {
            std::cout << "> " << "Enter first number: ";
            std::cin >> num1;
            std::cout << "> " << "Enter second number: ";
            std::cin >> num2;
            std::cout << "> " << "Result: " << math::subtract(num1,num2);
        }
        else if(oper == "*") {
            std::cout << "> " << "Enter first number: ";
            std::cin >> num1;
            std::cout << "> " << "Enter second number: ";
            std::cin >> num2;
            std::cout << "> " << "Result: " << math::multiply(num1,num2);
        }
        else if(oper == "/") {
            std::cout << "> " << "Enter first number: ";
            std::cin >> num1;
            std::cout << "> " << "Enter second number: ";
            std::cin >> num2;
            std::cout << "> " << "Result: " << math::divide(num1,num2);
        }
        else {
            std::cout << "> " << "wrong operation";
            isOkay = false;

        }
    }

return 0;
}