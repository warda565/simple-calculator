#include "../include/calculator.h"
#include <iostream>
#include <stdexcept>

float Divide(int a, int b){

    //this is error handling if a is 0;
    if (b == 0) {
        throw std::invalid_argument("Division by zero error.");
    }
    return static_cast<float>(a) / b;
}