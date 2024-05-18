# Wordle Game in C++

This is a simple console-based implementation of the popular word puzzle game Wordle, written in C++.

## How to Play

1. **Clone the Repository**: Clone this repository to your local machine using the following command:
```cmd
git clone <repository_url>
3. **Compile the Code**: Compile the `main.cpp` file using any C++ compiler. For example:
```cmd
g++ main.cpp -o wordle
4. **Run the Game**: Execute the compiled binary file to start the game.
```cmd
./wordle
5. **Choose Difficulty Level**: Select a difficulty level - Beginner, Intermediate, or Expert.

6. **Guess the Word**: Try to guess the hidden word within the specified number of attempts. Enter your guesses one by one.

7. **Feedback**: After each guess, you'll receive feedback in the form of colored squares:
- Green: Correct letter in the correct position.
- Yellow: Correct letter in the wrong position.
- Gray: Incorrect letter.

7. **Win or Lose**: If you guess the word correctly within the allowed attempts, you win! Otherwise, you lose.

## Features

- Three difficulty levels: Beginner (4-letter word), Intermediate (5-letter word), and Expert (6-letter word).
- Randomly selects words from a dictionary file based on the chosen difficulty level.
- User-friendly interface with colored feedback for guesses.

## Additional Notes

- The dictionary files for each difficulty level are stored in the `Dictionary` directory. Each file contains words corresponding to a specific alphabet. For example, `A.txt` contains words starting with the letter 'A'.
- To display feedback for guesses, the game utilizes background colors:
- Green background indicates a correct letter in the correct position.
- Red and green background indicates a correct letter in the wrong position.
- Red background indicates an incorrect letter.

## Customize and Extend

Feel free to customize and expand upon this README as needed. Happy gaming! If you need any further assistance or have any questions, feel free to ask.
