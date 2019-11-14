audioprocessing file takes input coordinates for three beacons
with x,y coordinates in a positive vector space, and three decibel ratings
for the audio they received from the source

inverse square algorithm determines the distance of the beacon from the output

trilaterate takes three beacons coordinates with distances and determines coordinates of the
sources

compile the testing file audioprocessingtests.cpp with command

g++ audioprocessing.cpp audioprocessingtests.cpp -o out
run with ./out

tests 1-9 are ran for both algorithms 
