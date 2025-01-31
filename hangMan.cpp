// Description: This program is a simple hangman game. The user enters a word and a hint, and then tries to guess the word. 
//The program displays the hint and the word as underscores. The user can guess the word by entering a guess. 
//The program will tell the user if the guess is correct or incorrect. The user can keep guessing until they guess the word correctly. 
//The program will display the number of tries it took the user to guess the word.

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    string word;
    string hint;
    string guess;
    int tries = 0;
    bool guessed = false;

    // Prompt user for word and hint
    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter a hint: ";
    cin >> hint;

    // Clear the screen
    cout << string(50, '\n');

    // Display the hint
    cout << "Hint: " << hint << endl;

    // Display the word as underscores
    for (int i = 0; i < word.length(); i++) {
        cout << "_ ";
    }

    // Loop until the user guesses the word
    while (!guessed) {
        // Prompt user for a guess
        cout << "\n\nEnter a guess: ";
        cin >> guess;

        // Check if the guess is correct
        if (guess == word) {
            cout << "Congratulations! You guessed the word in " << tries << " tries." << endl;
            guessed = true;
        } else {
            cout << "Incorrect. Try again." << endl;
            tries++;
        }
    }

    return 0;
}