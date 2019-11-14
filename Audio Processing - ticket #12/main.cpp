//Author: Abdullah Khan
//Project: 3307 Group 35 Raspberry Pi Computations
//Date: October 30, 2019

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "FFT.h"
#include "FFT.cpp"

using namespace std;
using namespace sf;

int main() {
	
	FFT *test1 = new FFT("justified.wav");
	
	if (test1->getFrequency() == 0) {cout << "Test 1 Failed!";}
	cout << "Test 1 Passed: Frequency of file justified.wav calculated" << endl;
	
	FFT *test2 = new FFT("sintra.wav");
	test2->setPitch(3);
	if (test2->getFrequency() == 0) (cout << "Test 1 Failed!");
	cout << "Test 2 Passed: Frequency of file sintra.wav calculated" << endl;
	
	if (test1->getFrequency() == test2->getFrequency()) {cout << "Test 3 Failed Same output produced!";}
	else {cout << "Test 3 Passed! outputs are different" << endl;}

return 0;
}
