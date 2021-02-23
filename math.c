#include "math.h"

float add(float number1, float number2) {
    return number1+number2;
}

float subtract(float number1, float number2) {
    return number1-number2;
}

float multiply(float number1, float number2) {
    return number1*number2;
}

float divide(float number1, float number2) {
    return number1/number2;
}

float power(float number1, float number2) {
    float result = 1;
    for(int counter=number2; counter>=1; --counter) {
        result *= number1;
    }
    return result;
}

float recursivePower(float number1, float number2) {
    float result;
    if (number2 == 0) {
        return 1.0;
    } else {
        result = recursivePower(number1, number2 - 1);
    }
    return result * number1;
}
