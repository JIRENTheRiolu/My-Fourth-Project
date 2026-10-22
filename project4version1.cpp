#include <iostream>
#include <cstdlib>
#define clrscr() system("cls")
using namespace std;

int main() {
    clrscr();

    int target = 5;
    int guess;
    int attempts = 0;
    int maxAttempts = 3;
    bool won = false;

    while (attempts < maxAttempts && !won) {

        cout << "Guess the number (1-10): ";
        cin >> guess;

        attempts++;

        if (guess == target) {
            cout << "Congratulations! You guessed correctly!" << endl;
            won = true;
        }
        else if (guess < target) {
            cout << "The target number is larger." << endl;
        }
        else {
            cout << "The target number is smaller." << endl;
        }
    }

    if (!won) {
        cout << "You lost! The target number was "
             << target << "." << endl;
    }

    cout << "Total attempts used: " << attempts << endl;

    return 0;
}