// @file      guess.cpp
// @author   Yongxu Duan
#include <iostream>
#include "../include/guess.hpp"

using namespace std;

void guess(int x, int y) {
  if (x>y) {
    cout << "Your number is greater than the answer.\n" << endl;
  }
  else {
    cout << "Your number is smaller than the answer.\n" << endl;
  }
return;
}