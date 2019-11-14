This shows how you can test that the Rasberry Pi Computations ticket works:
You must have SFML library to run this. 
This can be downloaded from terminal with the command
	
	sudo apt-get install libsfml-dev

To 
compile - these commands to make executable:
	
	g++ -c main.cpp FFT.cpp FFT.h
	
	g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

To run the tests:
	
	./sfml-app


These tests are done with the audio files "justified.wav" and "sintra.wav" so make sure to have these audio files in the same directory