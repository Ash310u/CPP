#include <iostream>
using namespace std;


void drawBoard(char *spaces);
void playerMove(char * spaces, char player);
void computerMove(char * spaces, char computer); 
bool checkWinner(char *spaces, char mark);
bool checkTie(char *spaces);

int main() {
    char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);
    while(running) {
        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, computer)) {
            running = false;
            cout << "You lose! Computer wins!" << '\n';
            return 0;
        } else if(checkTie(spaces)) {
            running = false;
            cout << "It's a tie!" << '\n';
            return 0;
        }
        
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player)) {
            running = false;
            cout << "You win! You beat the computer!" << '\n';
            return 0;
        } else if(checkTie(spaces)) {
            running = false;
            cout << "It's a tie!" << '\n';
            return 0;
        }
    }
    return 0;
}

void drawBoard(char *spaces) {
    cout << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    cout << "     |     |     " << '\n';
    cout << '\n';
}

void playerMove(char * spaces, char player) {
    int number;
    do {
        cout << "Enter a spot to place a marker (1-9): " << '\n';
        cin >> number;
        number--;
        if(spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    } while(!number > 0 || !number < 8);
}

void computerMove(char * spaces, char computer) {
    int number;
    srand(time(0));

    while(true) {
        number = rand() % 9;
        if(spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char mark) {
    for(int i = 0; i < 9; i += 3) {
        if(spaces[i] == mark && spaces[i+1] == mark && spaces[i+2] == mark) {
            return true;
        }
    }
    for(int i = 0; i < 3; i++) {
        if(spaces[i] == mark && spaces[i+3] == mark && spaces[i+6] == mark) {
            return true;
        }
    }
    if(spaces[0] == mark && spaces[4] == mark && spaces[8] == mark) {
        return true;
    }
    if(spaces[2] == mark && spaces[4] == mark && spaces[6] == mark) {
        return true;
    }
    return false;
}
bool checkTie(char *spaces) {
    for(int i = 0; i < 9; i++) {
        if(spaces[i] == ' ') {
            return false;
        }
    }
    return true;
}