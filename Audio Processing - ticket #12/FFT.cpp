//Author: Abdullah Khan
//Project: 3307 Group 35 Raspberry Pi Computations
//Date: October 30, 2019

#include "FFT.h"

FFT::FFT(string pathName) {
	if (!buffer.loadFromFile(pathName)) {
		err = 1;
	}
	sound.setBuffer(buffer);
	sound.play();
	sound.getPitch();
	frequency = sound.getPitch();
	sound.stop();
	err = 0;
}

void FFT::setPitch(float temp) {
	frequency = temp;
}

float FFT::getFrequency() {
	return frequency;
}


