//\
Kojiro, Brandon \
3 August 2024 \
P3 Galbraith - C++/Data Structures \
This program is a text-based number guessing game accessible via the console. The computer will choose a number between 1-100, and the player is prompted to make numerical guesses. Once the number is correctly guessed, the computer will display the number of \
guesses made, and a play again option.

// The three rules of C++ are: \
1) No global variables \
2) No strings (only cstrings or char arrays!) \
3) You should include <iostream> and not stdio, as well as some other syntax things because this is C++ and not C

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  //variables for target, #guesses, input, keeping guessing
  int target = 0;
  int numGuesses = 0;
  bool keepGuess = true;
  bool playAgain = true;
  srand(time(NULL));

  while (playAgain == true){    
    //create target number
    target = rand() % 100;
    cout << "Make your guess!\n" << "> ";

    //start asking
    while (keepGuess == true){
      numGuesses++;
      int input = 0;
      cin >> input;
      if (input == target){ //guess is correct
	keepGuess = false;
      } else { //guess is incorrect
	if (input > target){
	  cout << "Too high! Try again\n" << "> ";
	} else if (input < target) {
	  cout << "Too low! Try again\n" << "> ";
	}          
      }
    }
    
    //player win
    cout << "Congratulations! You guessed the correct number in " << numGuesses << " guesses!\n" << "Press y to play again, or press n to quit\n" << "> ";
    char pAInput;
    cin >> pAInput;
    if (pAInput == 'y'){ //play again
      keepGuess = true;
      numGuesses = 0;
    } else if (pAInput == 'n'){ //quit
      playAgain = false;
    }
  }
  cout << "Bye bye!";
  return 0;
}
