#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "🎉 Welcome to the Number Guessing Game! 🎉\n";
    cout << "I'm thinking of a number between 1 and 100...\n";
    cout << "Can you guess what it is? 🤔\n\n";

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try a bigger number. 🔼\n\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try a smaller number. 🔽\n\n";
        } else {
            cout << "🎉 Congratulations! You guessed the number in " << attempts << " tries! 🎯\n";
        }

    } while (guess != secretNumber);

    cout << "Thanks for playing! 🙌\n";
    return 0;
}
