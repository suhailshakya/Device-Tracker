//Author: Abdullah Khan
//Project: 3307 Group 35 Raspberry Pi Computations
//Date: October 30, 2019

#ifndef FFT_H_
#define FFT_H_

#include <SFML/Audio.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class FFT {
public:
	FFT(string pathName);
	float getFrequency();
	void setPitch(float temp);

private:
	string pathName;
	SoundBuffer buffer;
	sf::Sound sound;
	float frequency;
	int err;
};

#endif
