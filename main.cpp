#include <iostream>

int factorialIR(int);

int main() {
    int inputNum, result;

    std::cout << "Please enter the number you would like to make a factorial of:" << std::endl;
    std::cin >> inputNum;


    result = factorialIR(inputNum);

    std::cout << "Your result: " << result << std::endl;

    return 0;
}


int factorialIR(int num) {
    if (num > 0) {
        return num * factorialIR(num - 1);
    } else {
        return 1;
    }
}