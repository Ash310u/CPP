#include <iostream>
#include <ctime>

int main() {
    using namespace std;
    string playerChoice;
    string computerChoice;
    int computerNumber;
    bool playAgain = true;
    
    // Seed the random number generator
    srand(time(0));
    
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    
    while (playAgain) {
        cout << "\nEnter your choice (R: Rock, P: Paper, S: Scissors): ";
        cin >> playerChoice;
        
        // Convert player choice to lowercase
        for (char& c : playerChoice) {
            c = tolower(c);
        }
        
        // Generate computer choice
        computerNumber = rand() % 3;
        switch (computerNumber) {
            case 0:
                computerChoice = "r";
                break;
            case 1:
                computerChoice = "p";
                break;
            case 2:
                computerChoice = "s";
                break;
        }
        
        cout << "Computer chose: " << computerChoice << endl;
        
        // Determine winner
        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == "r" && computerChoice == "s") ||
                   (playerChoice == "p" && computerChoice == "r") ||
                   (playerChoice == "s" && computerChoice == "p")) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
        
        // Ask if player wants to play again
        cout << "\nDo you want to play again? (Y/N): ";
        string answer;
        cin >> answer;
        
        for (char& c : answer) {
            c = tolower(c);
        }
        
        if (answer != "y" && answer != "Y") {
            playAgain = false;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}
