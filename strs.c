#include <stdio.h>
#include <string.h>


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

    return 0;
}

