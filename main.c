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
  printf("The average of the 3 grades is: %d\n", average);

  // multi dimensional arrays
    int nums[2][5];
		float avg;
		int i;
		int j;

		nums[0][0] = 80;
		nums[0][1] = 70;
		nums[0][2] = 65;
		nums[0][3] = 89;
		nums[0][4] = 90;

		nums[1][0] = 85;
		nums[1][1] = 80;
		nums[1][2] = 80;
		nums[1][3] = 82;
		nums[1][4] = 87;

		for (i = 0; i < 2; i++) {
			avg = 0;
			
			for (j = 0; j < 5; j++) {
				avg += nums[i][j];
			}

			avg /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, avg);
		}
	// conditions

	int foo = 1;
	int bar = 2;

	if (foo < bar) {
		printf("foo is less than bar");
	}
	else if (foo == bar) {
		printf("foo is equal to bar");

	}
	else {
		printf("foo is greater than bar");
	}


		return 0;
}
