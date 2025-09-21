#include <stdio.h>
#include "isOdd.h"

int main() {
    int userNum;
    printf("Input your number: ");
    scanf("%i", &userNum);

    if(isOdd(userNum)) {
        printf("Odd!\n");
    } else {
        printf("Even!\n");
    }
}