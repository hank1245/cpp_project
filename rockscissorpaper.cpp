#include <iostream>

using std::cout;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    using std::cin;
    using std::string;
    char replay;
    do {
        char player;
        char computer;

        player = getUserChoice();
        cout << "Your Choice: ";
        showChoice(player);
        computer = getComputerChoice();
        cout << "Computer's choice: ";
        showChoice(computer);
        chooseWinner(player, computer);
        cout << "Wanna play again? (y/n): ";
        cin >> replay;
    } while (replay != 'n');
    return 0;
}

char getUserChoice() {
    char player;
    using std::cin;
    do {
        cout << "******************************";
        cout << "Rock Scissors Paper Game!\n";
        cout << "Enter r for Rock\n";
        cout << "Enter s for Scissors\n";
        cout << "Enter p for Paper\n";
        cout << "Enter: ";
        cin >> player;
    } while (player != 'r' && player != 's' && player != 'p');
    return player;
}
char getComputerChoice() {
    srand(time(0));
    int randint = rand() % 2;
    switch (randint) {
    case 0:
        return 'r';
        break;
    case 1:
        return 's';
        break;
    default:
        return 'p';
    }
}
void showChoice(char player) {
    switch (player) {
    case 'r':
        cout << "Rock" << '\n';
        break;
    case 's':
        cout << "Scissors" << '\n';
        break;
    case 'p':
        cout << "Paper" << '\n';
        break;
    }
}
void chooseWinner(char player, char computer) {
    switch (player) {
    case 'r':
        if (computer == 'r') {
            cout << "It's a tie!\n";
        } else if (computer == 's') {
            cout << "You won!\n";
        } else {
            cout << "You lose!\n";
        }
        break;
    case 's':
        if (computer == 's') {
            cout << "It's a tie\n";
        } else if (computer == 'p') {
            cout << "You won!\n";
        } else {
            cout << "You lose!\n";
        }
        break;
    case 'p':
        if (computer == 'p') {
            cout << "It's a tie\n";
        } else if (computer == 'r') {
            cout << "You won!\n";
        } else {
            cout << "You lose!\n";
        }
        break;
    }
}
