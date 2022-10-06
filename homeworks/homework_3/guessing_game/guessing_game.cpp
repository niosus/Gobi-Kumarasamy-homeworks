// Homework 3
// The guessing game

// To implement a program that will generate a random number and ask the user to
// guess it. It will then output the number of guesses the user required to
// guess the number.

#include <iostream>
#include <random>

using std::cin;
using std::cout;
using std::endl;

int main() {

  cout << "Welcome to the GUESSING GAME!" << endl;
  cout << "I will generate a number and you will guess it!" << endl;

  cout << "Please provide the smallest number:" << endl;
  double low_bound{};
  cin >> low_bound;

  cout << "Please provide the largest number:" << endl;
  double up_bound{};
  cin >> up_bound;

  // Random number generation
  // step 1: random device
  std::random_device RDev;

  // step 2: random number engine
  std::mt19937 REng{RDev()};

  // step 3: random number distribution
  std::uniform_real_distribution<> RDist{low_bound, up_bound};

  // step 4: generation
  int rand_num = RDist(REng);
  cout << "I've generated a number. Try to guess it!" << endl;

  // Guessing
  int count{};
  int guess{};

  while (true) {
    cout << "Please provide the next guess: ";
    cin >> guess;

    ++count;

    if (guess == rand_num) {
      cout << "You've done it! You guessed the number " << rand_num << " in "
           << count << " guesses!" << endl;
      break;
    } else if (guess > rand_num) {
      cout << "Your number is too big. Try again!" << endl;
      continue;
    } else if (guess < rand_num) {
      cout << "Your number is too small. Try again!" << endl;
      continue;
    }
  }

  return 0;
}
