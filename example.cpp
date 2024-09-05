#include <iostream>

using namespace std;
/*
Henry Xu
C++
8/29/24
guessing Game
 */
int main()
{
  srand(time(NULL));
  int guess;//init varraibles
  int answer = rand() % 100;
  int tries = 0;
  char plays = 'y';
  char quit;
  while (plays == 'y'){// while the player still wants to play
    while (guess != answer){// and the guess is not the answer
      cout << "guess a number" << endl;// ask them to guess
    cin >> guess;
    tries++;// add an attempt
    if (guess > answer){// thier guess is too big
      cout << "TOO BIG"<< endl;
    }
    if (guess < answer){// their guess is too small
      cout << "too small" << endl;
    }
    if (guess == answer){// they got the answer
      cout << "good job! It took you: " << tries << "tries" << endl;
      }
    /*if (tries % 5 == 0){
      cout << "wanna give up?(y/n)" <<endl;
      cin >> quit;
      if (quit == 'y'){
	cout << "The answer was" << answer << endl;
      }
      }*/
  }
    cout << "Wanna play again?(y/n)" << endl;//play again here
  cin >> plays;
  if (plays == 'y'){
    answer = rand() % 100;
    tries = 0;
  }
  if (plays == 'n'){
    plays = 'n';
   }
}
}
