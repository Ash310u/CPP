#include <iostream>

void showBalance(double balance);
double withdraw(double balance, double withdrawAmount);
double deposit(double balance, double depositAmount);

int main() {
    char op;
    double balance = 5000;
    double withdrawAmount;
    double depositAmount;
    bool flag = true;
    std::cout << "Current Balance: " << balance << " $" << std::endl;
    
    do {
        std::cout << "Enter anyone (B: Bank Balance, W: Withdraw Money, D: Deposit Money, Q: Quit): " << std::endl;
        std::cin >> op;
        
        // Clear any error flags from the input stream (like when invalid input is entered)
        std::cin.clear();
        // Flush the input buffer to remove any remaining characters (clears the input stream)
        fflush(stdin);

        if (op == 'B' || op == 'b') {
            showBalance(balance);
        } else if (op == 'W' || op == 'w') {
            std::cout << "Enter the amount to withdraw: ";
            std::cin >> withdrawAmount;
            balance = withdraw(balance, withdrawAmount);
        } else if (op == 'D' || op == 'd') {
            std::cout << "Enter the amount to deposit: ";
            std::cin >> depositAmount;
            balance = deposit(balance, depositAmount);
        } else if (op == 'Q' || op == 'q') {
            flag = false;
        } else {
            std::cout << "Invalid input" << std::endl;
        }
    } while (flag);
    
    
}

void showBalance(double balance) {
    std::cout << "Bank Balance: " << balance << " $" << std::endl;
}

double withdraw(double balance, double withdrawAmount) {
    double handleWithdraw = balance >= withdrawAmount ? balance - withdrawAmount : balance;
    if(handleWithdraw == balance) {
        std::cout << "Bank balance is not enough to meet withdraw amount" << std::endl;
    } else {
        std::cout << "Withdraw Amount: " << withdrawAmount << " $" << std::endl;
        std::cout << "Current Balance: " << handleWithdraw << " $" << std::endl;
    }
    return handleWithdraw;
}

double deposit(double balance, double depositAmount) {
    if(depositAmount <= 0) {
        std::cout << "Deposit amount is not valid" << std::endl;
    } else {
        double handleDeposit = balance + depositAmount;
        std::cout << "Deposit Amount: " << depositAmount << " $" << std::endl;
        std::cout << "Current Balance: " << handleDeposit << " $" << std::endl;
        return handleDeposit;
    }
    return balance;
}