#include <stdio.h>
#include <string.h>

static void print_big(int number);

int main() {
    // pointers for simple strings
    char * name = "Tonye Davids";
    // pointers using lists
    char namelength[] = "TonyeDavids";
    printf("%s is also my name and is %d letters long\n", name, strlen(namelength));

    // concat built in
    char dest[20]="Hello";
    char src[20]="World";

    strncat(dest,src,5);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);


    // for loops
    int i = 0;

    for (i; i < 10; i++) {
        printf("%d\n", i);
    }

    int summation = 0;
    int j = 0;
    int mylist[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    float avg;

    for (j; j < 10; j++) {
        if (mylist[j] != 0) {
            summation += mylist[j];
        }
    }

    if (j != 0) {
        avg = (float)summation / (j-1);
    } else {
        printf("Cannot calculate the average, as there are no non-zero numbers.\n");
    }

    printf("The average of all the numbers is %2f\n", avg);

    // for loops problem 2
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int factorial = 1;
    int t;

    /* calculate the factorial using a for loop  here*/
    for (t=0; t<10;t++) {
        factorial *= array[t];
    }

    printf("10! is %d.\n", factorial);
    

    // while loops
    int awsomelist[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int r = 0;

    while (r < 10) {
        if(awsomelist[r] < 5){
            r++;
            continue;
        }

        if(awsomelist[r] > 10){
            break;
        }

        printf("%d is greater or equal to 5\n", awsomelist[r]);
        r++;
    }

    // Functions in C!
    // For Print_Big function

    int newlist[] = {1, 11, 2, 22, 3, 33 };
    int q;
    for (q = 0; q < 6; q++) {
        print_big(newlist[q]);
    }



    return 0;
}

static void print_big(int number) {

    if (number > 10) {
        printf("%d is big\n", number);
    }
    else {

    }
}

