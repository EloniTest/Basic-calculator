#include <string>
#include <vector>
#include <sstream>
#include "mathOperations.hpp"

MathCalculations::MathCalculations() {
}

double MathCalculations::result(const std::string& virazhenie) {
    std::vector<double> nums;
    std::vector<char> opers;

    double num = 0.0;
    char op;

    std::stringstream ss(virazhenie);


    if(!(ss >> num)) {
        throw std::runtime_error("virazhenie doljno nachinatsya s chisla");
    }

    nums.push_back(num);



    // добавление конкретных элементов из строки с помощью string stream
    while(ss >> op >> num) {
        nums.push_back(num);
        opers.push_back(op);
    }

    // знаки умножения и деления
    for(size_t it = 0; it < opers.size(); it++) {
        if(opers[it] == '*' || opers[it] == '/') {
            double right = nums[it + 1];
            double left = nums[it];
            double result;

            if(opers[it] == '*') {
                result = left * right;
            }
            else {
                result = left / right;
            }

            nums[it] = result;
            nums.erase(nums.begin() + it + 1);
            opers.erase(opers.begin() + it);
        }

    }


    double result = nums[0];

    // знаки сложения и вычитания
    for(size_t it = 0; it < opers.size(); it++) {
        if(opers[it] == '+') {
             result += nums[it + 1];
        }
        else if(opers[it] == '-') {
            result -= nums[it + 1];
        }
    }
    return result;
}

MathCalculations::~MathCalculations() {

}