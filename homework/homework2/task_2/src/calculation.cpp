#include <iostream>
#include <sstream>
#include "../include/calculation.hpp"

using namespace std;



void calculation(int num_1, int num_2, string ext_1, string ext_2) {
  // In cpp program, string format can be directly compared through "==, >, <"  
  string txt_ext(".txt");
  string png_ext(".png");
  
  if (ext_1 == txt_ext) {
    if (ext_2 == txt_ext) {
      cout << (num_1 + num_2) / 2 << endl;
      return;
    }
    else if (ext_2 == png_ext) {
      cout << num_1 % num_2 << endl;
      return;
    }
    else {
      cerr << "Invalid should give an error. \n" << endl;
      return;
    }
  } else if (ext_1 == png_ext) {
    if (ext_2 == png_ext) {
      cout << num_1 + num_2 << endl;
      return;
    }
    else {
      cerr << "Invalid should give an error. \n" << endl;
      return;
    }
  }
}