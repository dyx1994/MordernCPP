#include<iomanip>
#include<iostream>
#include<sstream>
using namespace std;

int main(){
	// Combine variables into a stringstream.
	stringstream filename{"12345.txt"};

	// Create variables to split the stringstream
	int num = 0;
	string ext;

	// Split the string stream using simple syntax
	filename >> num >> ext;

	// Print it
	cout << "Number is: " << num << endl;
	cout << "Extension is: " << ext << endl;
	return 0;

}

