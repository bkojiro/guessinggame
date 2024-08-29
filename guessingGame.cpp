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

  while (playAgain == true){    
    //create target number
    srand(time(NULL));
    target = rand() % 100;

    //start asking
    while (keepGuess == true){
      cout << "Make your guess!";
      numGuesses++;
      char input;
      cin >> input;
      if (input == target){ //guess is correct
	cout << "yay!";
	keepGuess = false;
      } else { //guess is incorrect
	if (input > target){
	  cout << "Too high!";
	} else if (input < target) {
	  cout << "Too low!";
	}          
      }
    }
    
    //player win
    cout << "Congratulations! You guessed the correct number";
    cout << "It took you " << numGuesses << " guesses! Press y to play again, or press n to quit";
    char input;
    cin >> input;
    if (input == 'y'){
      keepGuess = true;
      numGuesses = 0;
      
    } else if (input == 'n'){
      playAgain = false;
    }
  }
  cout << "Bye bye!";
  return 0;
}
