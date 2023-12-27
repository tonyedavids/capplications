#include <stdio.h>

int main() {
   // variable types
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;
    
    sum = a + b + c;

  printf("The sum of a, b, and c is exactly %f.", sum);

  // arrays
  int grades[3]; // need to state the size of array first
  int average;   // need to assign an the average memeory to be used later

  grades[0] = 80;
  grades[1] = 85;
  grades[2] = 90;   // assigned every part of the list 

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);

  return 0;

  // multi dimensional arrays
  
}
