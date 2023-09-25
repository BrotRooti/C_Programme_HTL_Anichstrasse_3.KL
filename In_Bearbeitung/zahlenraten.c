//
// Created by Phillip on 18.09.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int iCounter;
int iGuess;
int iupperLimit;
int ilowerLimit;

int main() {
    srand(time(NULL));

    printf("Welcome to the guessing game:)\n");
    printf("Please enter a upper limit:\n");
    scanf("%i",&iupperLimit);

    printf("Please enter the lower Limit:\n");
    scanf("%i",&ilowerLimit);

    int irange = iupperLimit-ilowerLimit +1;

    printf("The Computer generates a random number between %i and %d,\n "
           "wich you have to guess.\n",ilowerLimit,iupperLimit);
    printf("After you have guessed the random number you will see your tries.\n ");

    int rn= rand();
    rn = ilowerLimit+rn%irange;

    printf("You can start guessing now\n");
    while (1){
        scanf("%i",&iGuess);
        if (iGuess==rn){ printf("This guess was correct, you needed %i tries\n",iCounter); return 0;}
        else if (iGuess< rn) printf("This guess was incorrect, the random number is higher than %i\n",iGuess);
        else printf("This guess was incorrect, the random number is lower than %i\n",iGuess);
        iCounter++;
    }

}