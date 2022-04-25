#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include "../include/calculation.hpp"

using namespace std;

void calculation();

/* int main(int argc, char *argv[])
When defining mian function, "int argc" stands for the number of input files on
the command window,it starts with 0, and 0 points out the execution file ./main
"char *argv[]" stands for the input string of the filenames. argv[0] stands for
execution file "./main" and argv[1] stands for  the first input file "100.txt",
argv[2] stands for the second one, etc. */
int main(int argc, char *argv[]) {

  if (argc!=3) {
    cerr << "Invalid input should give an error, exiting...\n" << endl;
    return(EXIT_FAILURE);
  }
  else {
    // stringstream function
    stringstream filename_1{argv[1]};
    stringstream filename_2{argv[2]};

    int num_1 = 0;
    int num_2 = 0;
    string ext_1;
    string ext_2;
    // split filename into number and extension
    filename_1 >> num_1 >> ext_1;
    filename_2 >> num_2 >> ext_2;
    calculation(num_1, num_2, ext_1, ext_2);
    return(EXIT_SUCCESS);

  }
}