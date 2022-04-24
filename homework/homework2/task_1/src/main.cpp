#include <iostream>
#include <cstdlib>
#include <random>
#include "../include/guess.hpp"

using namespace std;


int main() {
  int answer;
  random_device rd;
  mt19937 gen{rd()}; // seed the generator
  uniform_int_distribution<> dist{0, 99}; // set min and max
  answer = dist(gen); // generate number
  //cout << "Computer guess: " << answer << '\n';
  int number;
  while (true) {
    cout << "Please enter a number:" << "\n";
    cin >> number;
    if (cin.fail()) {
      cout << "Error encountered, exiting...\n" << endl;
      break;
      return 1;
    }
    else if (number<0 || number>99) {
      cerr << "[WARNING] : Number must be between 0 and 99.\n" << endl;
      continue;
    }
    else if (number==answer) {
      cout << "Congratulations! Your number is correct.\n" << endl;
      break;
      return 0;
    }
    else {
      guess(number, answer);
      continue;
    }
  }
}