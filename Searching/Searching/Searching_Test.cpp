#include <cstdlib>
#include <iostream>
#include <random> //Not best RNG, but good enough to test the algorithms
#include "Searching.h"
#include <algorithm>
using namespace std;

void display_array(int *a, const int& length);
//Generates an array of length 'length' of random numbers
void generate_array(int *a, const int& length);

int main() {

	int location;
	int target;
	const int a_length = 100;
	int a[a_length];
	generate_array(a, a_length);
	sort(a, a + a_length);
	//int a[a_length] = { 1,4,5,2,2,7,12,0,2, 8 };
	//int a[a_length] = { 1,4,5,2,2,7,1,0 };
	target = a[39];

	cout << "Current array: " << endl;
	display_array(a, a_length);

	//location = serial_search(a, 0, a_length - 1, target);
	binary_search(a, 0, a_length, target, location);

	cout << "Location of " << target << ": " << location << endl;
}

void display_array(int *a, const int& length) {

	for (int i = 0; i < length; ++i) {

		cout << i << ": " << a[i] << endl;
	}
}

void generate_array(int *a, const int& length) {

	for (int i = 0; i < length; ++i) {
		a[i] = rand();
	}
}