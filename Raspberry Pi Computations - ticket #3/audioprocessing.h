// By Bradley audioprocessing header file

#ifndef AUDIOPROCESSING_H
#define AUDIOPROCESSING_H

class beacon{
private:                    //defines beacon class
  int x,y;
  double distance;
public:
  beacon(int x1, int y1, double d1);      //constructor and getters

  int getX();

  int getY();

  double getD();
};

class orderedPair{
private:                      //
  int x, y;

public:                             //constructor and getters
  orderedPair(int x1, int y1);

  int getX();

  int getY();
};

double inverseSquare(double decibels);  //defines functions 

orderedPair trilateration(beacon beacon1, beacon beacon2, beacon beacon3);

orderedPair audioprocessing(int x1,int y1,int x2,int y2,int x3,int y3,double d1, double d2, double d3);

#endif
