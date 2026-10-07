#include <iostream>
#include <string>
#include <numeric>
#include <limits>
#include "mathOperations.hpp"


void menu() {
    std::cout << "----Menu----\n";
    std::cout << ">1. Math operations\n";
    std::cout << ">2. Exit\n";
    std::cout << "Your choice: ";
}




int main() {

    double num1, num2;
    bool isOkay = true;
    char choice;
    char oper;

    std::string expression;

    MathCalculations math;


    std::cout << "Basic calculator\n\n";


    while (isOkay) {
        menu();
        // ввод до первого пробела
        std::cin >> choice;

        // игнор того, что ввели в choice
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
        case '1':

            std::cout << "> Enter a expression: ";
            std::getline(std::cin, expression);

            try {
                std::cout << expression << " = " << math.result(expression) << '\n';
            }
            catch(std::exception& err) {
                std::cout << "Error: " << err.what() << '\n';
            }
            break;
        case '4':
            std::cout << "leaving calculator" << '\n';
            isOkay = false;
            break;
        }
    }

    math.~MathCalculations();

    return 0;
}