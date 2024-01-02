#include<stdio.h>


int start = 1;
int counter(int number);


int main() {
    
    // static way to calculate factorials

    for (int count =1; count <= 5; count++) {

        start *= count;

        printf("%d\n", start);
    }


    // Pointers excercise

     int n = 10;
     int * pointer_to_n = &n;
     *pointer_to_n += 1;
     

    
    if (pointer_to_n != &n) return 1;
    if (*pointer_to_n != 11) return 1;

    printf("Done!\n");

    // Structures excercise

    

    return 0;
}