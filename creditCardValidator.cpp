// Using Luhn's algorithm to validate credit card numbers.
#include <iostream>

bool isValidCreditCard(const std::string &cardNumber);

int main() {
    std::string cardNumber;
    std::cout << "Enter your credit card number: ";
    std::cin >> cardNumber;
 
    if (isValidCreditCard(cardNumber)) {
        std::cout << "Valid credit card number" << std::endl;
    } else {
        std::cout << "Invalid credit card number" << std::endl;
    }
    return 0;
}

bool isValidCreditCard(const std::string &cardNumber) {
    int sum = 0;
    for (int i = cardNumber.length() - 1; i >= 0; i -= 2) {
        int digit = cardNumber[i] - '0';
        digit *= 2;
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    int oddSum = 0;
    for (int i = cardNumber.length() - 2; i >= 0; i -= 2) {
        int digit =  cardNumber[i] - '0';
        if(digit % 2 != 0) {
            oddSum += digit;
        }
    }
    if ((sum + oddSum) % 10 == 0) {
        return true;
    } else {
        return false;
    }
}