#include <iostream>

#include "audioprocessing.h" //inlude audioprocessing

int main(){                //runs 9 tests prints describes what they are
  printf("Test 1: Check if inverse sqaured algorithm with 30 decibels has correct output\n");
  double result1 = inverseSquare(30);
  double rounded1 = (int)(result1 * 1000.0)/1000.0;
  if (rounded1 == 12.909){
    printf("Test 1 Passed\n");                //rounds and outputs results
  }else{
    printf("Test 2 Failed, result was %f\n", result1);
  }
  printf("Test 2: Check if inverse sqaured algorithm with 4 decibels has correct output\n");
  double result2 = inverseSquare(4);
  double rounded2 = (int)(result2 * 1000.0)/1000.0;
  if (rounded2 == 35.355){
    printf("Test 2 Passed\n");
  }else{
    printf("Test 2 Failed, result was %f\n", result2);
  }
  printf("Test 3: Check if inverse sqaured algorithm 14 decibels has correct output\n");
  double result3 = inverseSquare(14);
  double rounded3 = (int)(result3 * 1000.0)/1000.0;
  if (rounded3 == 18.898){
    printf("Test 3 Passed\n");
  }else{
    printf("Test 3 Failed, result was %f\n", result3);
  }
  printf("Test 4: Check if inverse sqaured algorithm handles a negative input\n");
  double result4 = inverseSquare(-5.0);
  if (result4 == -1){
    printf("Test 4 Passed\n");
  }else{
    printf("Test 4 Failed, result was %f\n", result4);
  }
  printf("Test 5: Check if trilaterate algorithm with has correct output for input(4,4,9,7,9,1,11,24,12)\n");
  orderedPair t1 = audioprocessing(4,4,9,7,9,1,11,24,12);
  if (t1.getX() == 24 && t1.getY() == 17){
    printf("Test 5 Passed\n");
  }else{
    printf("Test 5 Failed, result was X = %d Y = %d\n", t1.getX(), t1.getY());
  }
  printf("Test 6: Check if trilaterate algorithm with has correct output for input (13,2,9,22,1,1,43,33,22)\n");
  orderedPair t2 = audioprocessing(13,2,9,22,1,1,43,33,22);
  if (t2.getX() == 10 && t2.getY() == 11){
    printf("Test 6 Passed\n");
  }else{
    printf("Test 6 Failed, result was X = %d Y = %d\n", t2.getX(), t2.getY());
  }
  printf("Test 7: Check if trilaterate algorithm with has correct outputfor input (2,5,9,15,11,1,16,23,42)\n");
  orderedPair t3 = audioprocessing(2,5,9,15,11,1,16,23,42);
  if (t3.getX() == 20 && t3.getY() == 4){
    printf("Test 7 Passed\n");
  }else{
    printf("Test 7 Failed, result was X = %d Y = %d\n", t3.getX(), t3.getY());
  }
  printf("Test 8: Check if trilaterate algorithm can handle invalid coordinates\n");
  bool i = true;
  try{                                              //catches error message for invalid
    orderedPair t4 = audioprocessing(4,-3,9,7,9,1,11,24,12);
  }catch (const char* msg){
    printf("Test 8 Passed\n");
    i = false;
  }
  if (i){
    printf("Test 8 Failed\n");
  }
  printf("Test 9: Check if trilaterate can handle invalid distances\n");
  bool j = true;
  try{
    orderedPair t5 = audioprocessing(4,4,9,7,9,1,-11,24,12);
  }catch (const char* msg){
    printf("Test 9 Passed\n");
    j = false;                           //catches error message for invalid
  }
  if (j){
    printf("Test 9 Failed\n");
  }

  return 0;
}
