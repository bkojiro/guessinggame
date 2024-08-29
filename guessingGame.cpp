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
      char input[3];
      cin.get(input, 3); //smth about this is messing up
      int inputAsNum = atoi(input);
      cout << inputAsNum;
      if (inputAsNum == target){ //guess is correct
	cout << "yay!";
	keepGuess = false;
      } else { //guess is incorrect
	if (inputAsNum > target){
	  cout << "Too high!";
	} else if (inputAsNum < target) {
	  cout << "Too low!";
	}          
      }
    }
    
    //player win
    cout << "Congratulations! You guessed the correct number";
    cout << "It took you " << numGuesses << " guesses! Press y to play again, or press n to quit";
    char pAInput;
    cin >> pAInput;
    if (pAInput == 'y'){
      keepGuess = true;
      numGuesses = 0;
      
    } else if (pAInput == 'n'){
      playAgain = false;
    }
  }
  cout << "Bye bye!";
  return 0;
}
